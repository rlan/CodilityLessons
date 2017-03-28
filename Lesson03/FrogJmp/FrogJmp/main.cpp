//
//  Codility
//  Lesson 3
//  FrogJmp
//  https://codility.com/programmers/lessons/3-time_complexity/frog_jmp/
//
//  100% score
//  https://codility.com/demo/results/trainingJ9SYVS-SF6/
//
//  Created by Rick Lan on 3/28/17.
//  See LICENSE.
//

#include <iostream>
#include <cmath>

using namespace std;


int solution(int X, int Y, int D) {
    int dist = Y-X;

//    cout << (double)dist/(double)D << endl;
    return (int)ceil((double)dist/(double)D);
}

int main(int argc, const char * argv[]) {
    int X, Y, D;
    cout << "X: ";
    cin >> X;
    cout << "Y: ";
    cin >> Y;
    cout << "D: ";
    cin >> D;
    cout << "Solution: " << solution(X, Y, D) << std::endl;
    return 0;
}
