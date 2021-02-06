/*
 * Q3.cpp
 *
 *  Created on: 03-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
#include <cmath>
using namespace std;

int fact(int n){
    int fact=1;
	for(int i=n; i>=1; i--){
		fact*=i;
	}
	return fact;
}

int C(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int S(int n, int r){
    if(r>n){
        return 0;
    }
    else if(r==n){
        return 1;
    }
    else if(r==(n-1)){
        return C(n,2);
    }
    else if(r==(n-2)){
        return C(n,3)+3*C(n,4);
    }
    else if(r==1){
        return 1;
    }
    else if(r==2){
        return pow(2,(n-1))-1;
    }
    else{
        return S(n-1,r-1)+r*S(n-1,r);
    }
}

void out(int n){
    int c=0;
    for(int i; i<n; i++){
        cout<<"No. of Clustering Arrangements with "<<i+1<<" Clusters: "<<S(n,i+1)<<endl;
        c=c+S(n,i+1);
    }
    cout<<"Total No. of Possible Clustering Arrangements is: "<<c;
}

int main(){
    int n;
    cout<<"Enter the number of records n: ";
    cin>>n;
    out(n);

    return 0;
}