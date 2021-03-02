/*
 * Q1.cpp
 *
 *  Created on: 28-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <bits/stdc++.h> 
#include <iostream>
#include<string>
using namespace std;

void Q1(string arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;

        cout<<endl<<"Splitting[";
        for(int i=l; i<(r-1); i++){
            cout<<arr[i]<<", ";
        }
        cout<<arr[r-1]<<"]"<<endl;

        cout<<"Left List=[";
        for(int i=l; i<(mid-1); i++){
            cout<<arr[i]<<", ";
        }
        cout<<arr[mid-1]<<"]  ";

        cout<<"Right List=[";
        for(int i=mid; i<(r-1); i++){
            cout<<arr[i]<<", ";
        }
        cout<<arr[r-1]<<"]"<<endl;

        Q1(arr,l,mid);
        Q1(arr,mid+1,r);
    }
}

int main(){
    int n;
    cin>>n;
    string arr[n];
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin,arr[i]);
    }
    Q1(arr,0,n);
    return 0;
}
