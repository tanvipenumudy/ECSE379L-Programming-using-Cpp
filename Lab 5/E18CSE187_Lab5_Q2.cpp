/*
 * Q2.cpp
 *
 *  Created on: 20-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> Encrypt(vector<vector<int>> arr, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if((m-i)==m || (n-j)==n || (m-1-i)==0 || (n-1-j)==0){
                arr[i][j]+=(i+1);
            }
            else{
                arr[i][j]-=j;
            }
        }
    }
    return arr;
}

vector<vector<int>> Decrypt(vector<vector<int>> arr, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if((m-i)==m || (n-j)==n || (m-1-i)==0 || (n-1-j)==0){
                arr[i][j]-=(i+1);
            }
            else{
                arr[i][j]+=j;
            }
        }
    }
    return arr;
}

void print(vector<vector<int>> arr, int m, int n){
    for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
}

int main(){
    int in = 0;
    cout<<"1. Encrypt"<<endl<<"2. Decrypt"<<endl<<"3. Quit"<<endl;

    while(in!=3){
        cout<<"Choose: ";
        cin>>in;

        if(in == 1){
            int m, n;
            cin>>m>>n;
            vector<vector<int>> arr(m, vector<int>(n));
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    cin>>arr[i][j];
                }
            }
            print(Encrypt(arr, m, n), m, n);
        }

        else if(in == 2){
            int m, n;
            cin>>m>>n;
            vector<vector<int>> arr(m, vector<int>(n));
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    cin>>arr[i][j];
                }
            }
            print(Decrypt(arr, m, n), m, n);
        }

        else if(in == 3){
            break;
        }

        else{
            cout<<"Enter Valid Key!"<<endl;
        }
    }
    
    return 0;
}