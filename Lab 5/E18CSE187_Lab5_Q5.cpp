/*
 * Q5.cpp
 *
 *  Created on: 20-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include<iostream>
using namespace std;

void Q5(int arr[], int n){
    int temp;
    double s;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Queue (Increasing Order): ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        s+=arr[i];
    }
    cout<<endl<<"Average: "<<s/n;
}

int main(){
    int n, arr[1000];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Q5(arr,n);

    return 0;
}