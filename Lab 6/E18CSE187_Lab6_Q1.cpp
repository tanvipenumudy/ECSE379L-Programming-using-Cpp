/*
 * Q1.cpp
 *
 *  Created on: 28-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include<bits/stdc++.h>
using namespace std;

void Q1(vector<string> v) { 
    cout<<"Spliting[ ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"]"<<endl;
    
    vector<string> l(v.begin(), v.begin()+(v.size()/2));
    vector<string> r(v.begin()+(v.size()/2), v.end());

    cout << "Left List=[ ";
    for(int i=0; i<l.size(); i++){
        cout<<l[i]<<" ";
    }
    cout<<"] ";

    cout<<"Right List=[ ";
    for(int i=0; i<r.size(); i++){
        cout<<r[i]<<" ";
    }
    cout<<"]"<<endl;

    if(l.size()>1){
        Q1(l);
    }
    else if(l.size()==1){
        cout<<"Spliting[ "<<l[0]<<" ]"<<endl;
    }

    if(r.size()>1){
        Q1(r);
    }
    else if(l.size()==1){
        cout<<"Spliting[ "<<r[0]<<" ]"<<endl;
    }
} 

int main(){
    vector<string> arr;
    string str;
    while(str!="end"){
        cin>>str;
        arr.push_back(str);
    }
    arr.pop_back();
    Q1(arr);
	return 0;
}