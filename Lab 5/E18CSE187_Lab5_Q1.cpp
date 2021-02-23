/*
 * Q1.cpp
 *
 *  Created on: 20-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
#include <vector>
using namespace std;

void Q1(vector<vector<int>> arr, int sR, int eR, int sC, int eC){
    if(sR>eR || sC>eC){
        return;
    }
    for(int col=sC; col<=eC; col++){
        cout<<arr[sR][col]<<" ";
    }
    for(int row=sR+1; row<=eR; row++){
        cout<<arr[row][eC]<<" ";
    }
    for(int col=eC-1; col>=sC; col--){
        if(sR==eR){
            break;
        }
        cout<<arr[eR][col]<<" ";
    }
    for(int row=eR-1; row>=sR+1; row--){
        if(sC==eC){
            break;
        }
        cout<<arr[row][sC]<<" ";
    }
    Q1(arr, sR+1, eR-1, sC+1, eC-1);
}

int main(){
    int m, n;
    cin>>m>>n;
    vector<vector<int>> arr(m, vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    Q1(arr, 0, m-1, 0, n-1);
    
    return 0;
}