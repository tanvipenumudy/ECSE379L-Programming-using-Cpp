/*
 * Q3.cpp
 *
 *  Created on: 28-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<(n+1); i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}