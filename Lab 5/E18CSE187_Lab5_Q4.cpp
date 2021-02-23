/*
 * Q4.cpp
 *
 *  Created on: 20-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include<iostream>
#include<string>
using namespace std;

string Q4(string s, char n, char x){
    for(int i=0; i<s.size(); i++){
        if(s[i]==n){
            s[i]=x;
        }
    }
    return s;
}

int main(){
    string s;
    char n, x;
    cout<<"Enter String: ";
    getline(cin,s);
    cout<<"Enter character to be replaced: ";
    cin>>n;
    cout<<"Enter character to replace with: ";
    cin>>x;
    cout<<Q4(s,n,x);
    
    return 0;
}