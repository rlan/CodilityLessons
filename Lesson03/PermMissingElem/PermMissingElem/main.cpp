//
//  Codility
//  Lesson 3
//  PermMissingElem
//  https://codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/
//
//  100% score
//  https://codility.com/demo/results/trainingJNMV57-XVS/
//
//  Created by Rick Lan on 3/28/17.
//  See LICENSE.
//

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    if (A.empty())
        return 1;
    
    vector<bool> exist(A.size()+2, 0);
    
    for (unsigned long ii = 0; ii < A.size(); ii++)
        exist[A[ii]] = true;
    
    int sol = 0;
    for (unsigned long ii = 1; ii < exist.size(); ii++)
        if (!exist[ii])
            sol = (int)ii;
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
