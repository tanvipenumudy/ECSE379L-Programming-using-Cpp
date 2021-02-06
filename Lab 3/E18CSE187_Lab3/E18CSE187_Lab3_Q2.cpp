/*
 * Q2.cpp
 *
 *  Created on: 03-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
using namespace std;

void condition1(int arr[1000][2], int n){
    int c=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i][0]<arr[j][0])&&(arr[i][1]>arr[j][1])){
                c++;
                cout<<c<<" : "<<"("<<arr[i][0]<<","<<arr[i][1]<<"), ("<<arr[j][0]<<","<<arr[j][1]<<")"<<endl;
            }
        }
    }
}

void condition2(int arr[1000][2], int n){
    int c=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i][0]>arr[j][0])&&(arr[i][1]<arr[j][1])){
                c++;
                cout<<c<<" : "<<"("<<arr[i][0]<<","<<arr[i][1]<<"), ("<<arr[j][0]<<","<<arr[j][1]<<")"<<endl;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter number of pairs: ";
    cin>>n;
    int arr[1000][2];
    cout<<"Enter elements separated by space: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"(a)"<<endl;
    condition1(arr, n);
    cout<<"(b)"<<endl;
    condition2(arr, n);

    return 0;
}