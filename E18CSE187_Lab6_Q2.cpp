/*
 * Q2.cpp
 *
 *  Created on: 28-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Q2(int arr[], int n){
    pair<int, int> pos[n];
    for(int i=0; i<n; i++){
        pos[i].first = arr[i];
        pos[i].second = i;
    }
    sort(pos, pos + n);
    vector<bool> v(n, false);
    int ans = 0;
    for(int i=0; i<n; i++){
        if(v[i] || pos[i].second==i){
            continue;
        }
        int s = 0;
        int j = i;
        while(!v[j]){
            v[j] = 1;
            j = pos[j].second;
            s++;
        }
        if(s>0){
            ans+=(s-1);
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<Q2(arr,n);
    return 0;
}