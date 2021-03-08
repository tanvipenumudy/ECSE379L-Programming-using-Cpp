/*
 * Q1.cpp
 *
 *  Created on: 06-Mar-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin>>n;
    char *arr[n];
    for(int i=0; i<n; i++){
        char *str = new char[100];
        cin>>str;
        arr[i]=str;
    }
    int pos=-1;
    char **ptr = &arr[0];
    for(int i=0; i<n; i++){
        if(strcmp(*ptr,"Amitabh")==0){
            pos=i+1;
        }
        ptr++;
    }
    if(pos==-1){
        cout<<"Not present";
    }
    else{
        cout<<"Present at number "<<pos;
    }
    return 0;
}
