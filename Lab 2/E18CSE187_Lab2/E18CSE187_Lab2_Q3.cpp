/*
 * Q3.cpp
 *
 *  Created on: 19-Jan-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
using namespace std;

int main() {
	int num, fact;
	cin>>num;
	if(num>=0){
		fact=1;
		for(int i=num;i>=1;i--){
			fact*=i;
		}
		cout<<fact;
	}
	else{
		cout<<"Error";
	}
	return 0;
}


