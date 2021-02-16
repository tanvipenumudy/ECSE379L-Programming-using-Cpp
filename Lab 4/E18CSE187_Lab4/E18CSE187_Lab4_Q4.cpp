/*
 * Q4.cpp
 *
 *  Created on: 14-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
using namespace std;

int *lowerTriangularMatrix(int m[1000][1000], int n){
    int x = 0;
    int *arr = new int[(n*(n+1))/2];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i>=j){
            arr[x] = m[i][j];
            x++;
            }
        }
    }
    return arr;
}

int *upperTriangularMatrix(int m[1000][1000], int n){
    int x = 0;
    int *arr = new int[(n*(n+1))/2];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<=j){
            arr[x] = m[i][j];
            x++;
            }
        }
    }
    return arr;
}

void print(int arr[], int n){
    cout<<"{";
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<", ";
    }
    cout<<arr[n-1]<<"}";
}

int main(){
    int n;
    cin>>n;
    int arr[1000][1000];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"1. Lower Triangular Matrix Traversal"<<endl<<"2. Upper Triangular Matrix Traversal"<<endl;
    cout<<"Choice of Solution: ";
    int choice;
    cin>>choice;
    
    if(choice==1){
        cout<<"Lower Triangular Matrix Traversal: "<<endl;
        int* A = lowerTriangularMatrix(arr, n);
        print(A, (n*(n+1))/2);
    }
    else if(choice==2){
        cout<<endl<<"Upper Triangular Matrix Traversal: "<<endl;
        int* B = upperTriangularMatrix(arr, n);
        print(B, (n*(n+1))/2);
    }
    else{
        cout<<"Enter Valid Key!";
    }

    return 0;
}