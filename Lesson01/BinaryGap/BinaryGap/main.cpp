//  Codility
//  Lesson 1 Iterations
//  BinaryGap
//  https://codility.com/programmers/lessons/1-iterations/binary_gap/
//  100% score
//
//  Created by Rick Lan on 3/28/17.
//  See LICENSE.
//

#include <iostream>
#include <algorithm>

int solution(int N) {
    int mask = 1;
    int ones[32];
    int ones_count = 0;
    int ii, jj;
    
    for (ii = 0, jj = 0; ii < 32; ii++) {
        if (N & mask)
            ones[jj++] = ii;
        mask <<= 1;
    }
    
    ones_count = jj;
    if (ones_count <= 1)
        return 0;
    
    int max = 0;
    while (ones_count-- > 1) {
        int diff = ones[ones_count] - ones[ones_count-1] - 1;
        max = std::max(max, diff);
    }
    return max;
}

//
// Corner cases: 0, 1, 2147483647 (2^31-1)
//
int main(int argc, const char * argv[]) {
    int N;
    
    if (argc != 2) {
        std::cout << "Enter a number: ";
        std::cin >> N;
    } else {
        N = atoi(argv[1]);
    }
    std::cout << "N: " << N << std::endl;
    std::cout << "Solution: " << solution(N) << std::endl;
    return 0;
}
