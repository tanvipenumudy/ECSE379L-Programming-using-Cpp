/*
 * Q3.cpp
 *
 *  Created on: 14-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

void PrimeFactors(int n){
    vector<int> vec;
    while(n%2==0){
        vec.push_back(2);
        n/=2;
    }
    for(int i=3; i<=sqrt(n); i+=2){
        while(n%i==0){
            vec.push_back(i);
            n/=i;
        }
    }
    if(n>2){
        vec.push_back(n);
    }

    map<int, int> M;
    for(int i=0; vec[i]; i++){
        if(M.find(vec[i])==M.end()){
            M[vec[i]] = 1;
        }
        else{
            M[vec[i]]++;
        }
    }

    for(auto& it : M){
        cout<<it.first<<"^"<<it.second<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    PrimeFactors(n);

    return 0;
}