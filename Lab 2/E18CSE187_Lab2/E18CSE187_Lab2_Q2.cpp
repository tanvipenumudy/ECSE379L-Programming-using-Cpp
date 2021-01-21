/*
 * Q2.cpp
 *
 *  Created on: 19-Jan-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
using namespace std;

int main() {
	int basic, da, hra, gross;
	cout<<"BASIC = ";
	cin>>basic;
	cout<<"DA = ";
	cin>>da;
	cout<<"HRA = ";
	cin>>hra;
	gross=basic+((da*basic)/100)+((hra*basic)/100);
	cout<<"Gross Salary = "<<gross;
	return 0;
}


