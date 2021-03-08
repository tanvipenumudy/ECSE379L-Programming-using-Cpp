/*
 * Q1.cpp
 *
 *  Created on: 06-Mar-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Q1(char *arr, int n){
    int *ptr = &arr[0];
    char *key = "Amitabh";
    for(int i=0; i<n; i++){
        if(*ptr==*key){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    char *arr[n];
    for(int i=0; i<n; i++){
        char *str = new char[100];
        cin>>str;
        arr[i]=str;
    }
    cout<<Q1(arr, n);
    return 0;
}

int Q1(char *arr, int n){
    char *ptr = arr[0];
    const char *key = "Amitabh";
    for(int i=0; i<n; i++){
        if(*ptr==*key){
            return i+1;
        }
    }
    return -1;
}