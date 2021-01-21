/*
 * Q4.cpp
 *
 *  Created on: 19-Jan-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
using namespace std;

bool isprime(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main() {
	int n, count=0;
	cin>>n;
	for(int i=0;i<=n;i++){
		if(isprime(i)){
			count=count+1;
		}
	}
	cout<<count;
}


