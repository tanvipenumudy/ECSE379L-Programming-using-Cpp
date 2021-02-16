/*
 * Q1.cpp
 *
 *  Created on: 14-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
using namespace std;

int *task1(int A[], int B[], int n1, int n2){
    int *arr = new int[n1*n2];
    int x = 0;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            arr[x] = A[i] + B[j];
            x++;
        }
    }
    return arr; 
}

int task2(int arr[], int n){
    int m = 0;
    int x;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            x = arr[i]^arr[j];
            if(x > m){
                m = x;
            }
        }
    }
    return m;
}

int main(){
    int n1, n2, A[1000], B[1000];
    cin>>n1;
    cout<<"A[] = ";
    for(int i=0; i<n1; i++){
        cin>>A[i];
    }
    cin>>n2;
    cout<<"B[] = ";
    for(int i=0; i<n2; i++){
        cin>>B[i];
    }

    int* arr = task1(A, B, n1, n2);
    cout<<"(a) C[] = {";
    for(int i=0; i<n1*n2-1; i++){
        cout<<arr[i]<<", ";
    }
    cout<<arr[(n1*n2)-1]<<"}, ";

    int m = task2(arr, n1*n2);
    cout<<"(b) Max Pair = "<<m;

    return 0;
}