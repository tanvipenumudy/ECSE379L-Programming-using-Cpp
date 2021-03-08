/*
 * Q2.cpp
 *
 *  Created on: 06-Mar-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
using namespace std;

double *ProblemSolution(int N1, int N2){
    double val = N1*20+(double)34/N2;
    double *x = &val;
    return x;
}

int main(){
    int N1, N2;
    cin>>N1;
    cin>>N2;
    cout<<*ProblemSolution(N1, N2);
    return 0;
}