/*
 * Q4.cpp
 *
 *  Created on: 28-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
using namespace std;

void Q4(int n){
    int i, j = 0;
    int ans[1000];

    if(n<10){
        cout<<n+10;
        return;
    }

    for(i=9; i>1; i--){
        while(n%i==0){
            n/=i;
            ans[j]=i;
            j++;
        }
    }

    if(n>10){
        cout<<"Not Possible";
        return;
    }

    for(i=j-1; i>=0; i--){
        cout<<ans[i];
    }
}

int main(){
    int n;
    cin>>n;
    Q4(n);
    return 0;
}