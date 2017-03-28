//
//  Codility
//  Lesson 3
//  TapeEquilibrium
//  https://codility.com/programmers/lessons/3-time_complexity/tape_equilibrium/
//
//  100% score
//  https://codility.com/demo/results/trainingSC33WD-Y4A/
//
//  Created by Rick Lan on 3/28/17.
//  See LICENSE.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    // B[1] = A[0] - A[1] - A[2] - A[3] - A[4] ... - A[N-1]
    // B[2] = A[0] + A[1] - A[2] - A[3] - A[4] ... - A[N-1] = B[1] + 2*A[1]
    // B[3] = A[0] + A[1] + A[2] - A[3] - A[4] ... - A[N-1] = B[2] + 2*A[2]
    // ...
    // B[N-1] = B[N-2] + 2*A[N-2]
    
    unsigned long N = A.size();
    if (N <= 1)
        return -1;
    
    
    vector<long> B(N, -1);
    B[1] = A[0];
    for (unsigned long ii = 1; ii < N; ii++) {
        B[1] -= A[ii];
    }
    int p = (int)abs(B[1]);
    for (unsigned long ii = 2; ii < N; ii++) {
        B[ii] = B[ii-1] + 2*A[ii-1];
        p = (int)min((long)p, abs(B[ii]));
    }
    return p;
}

int main(int argc, const char * argv[]) {
    
    vector<int> A;
    int N;
    
    cout << "N: ";
    cin >> N;
    if (N > 0) {
        A.resize(N);
        
        for (int ii = 0; ii < N; ii++) {
            cout << "A[" << ii << "]: ";
            cin >> A[ii];
        }
    }
    
    cout << "Solution: " << solution(A) << endl;
    return 0;
}
