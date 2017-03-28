//
//  Codility
//  Lesson 2 Arrays
//  OddOccurrencesInArray
//  https://codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/
//
//  100% score
//
//  Created by Rick Lan on 3/28/17.
//  See LICENSE.
//

#include <iostream>
#include <vector>
using namespace std;

// XOR
int solution(vector<int> &A) {
    if (A.size() == 0) {
        return -1;
    }
    
    int sol = A[0];
    for (unsigned int ii = 1; ii < A.size(); ii++) {
        sol ^= A[ii];
    }
    return sol;
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
