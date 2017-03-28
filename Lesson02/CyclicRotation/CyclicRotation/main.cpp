//
//  Codility
//  Lesson 2
//  CyclicRotation
//  https://codility.com/programmers/lessons/2-arrays/cyclic_rotation/
//
//  100% score
//  https://codility.com/demo/results/trainingW3ATGD-489/
//
//  Created by Rick Lan on 3/28/17.
//  See LICENSE.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> &A, int K) {
    
    if (A.size()==0)
        return A;
    
    vector<int> out(A.size());
    unsigned long N = A.size();
    K = K % N;
    
    int jj = 0;
    for (unsigned long ii = N-K; ii < N; ii++)
        out[jj++] = A[ii];
    for (unsigned long ii = 0; ii < N-K; ii++)
        out[jj++] = A[ii];
    
    return out;
}


int main(int argc, const char * argv[]) {
    
    vector<int> A;
    int K, N;

    cout << "K: ";
    cin >> K;
    cout << "N: ";
    cin >> N;
    if (N > 0) {
        A.resize(N);
        
        for (int ii = 0; ii < N; ii++) {
            cout << "A[" << ii << "]: ";
            cin >> A[ii];
        }
    }
    
    vector<int> out = solution(A, K);

    cout << "Solution:" << endl;
    for (int ii = 0; ii < A.size(); ii++) {
        cout << "S[" << ii << "] = " << out[ii] << endl;
    }
    return 0;
}
