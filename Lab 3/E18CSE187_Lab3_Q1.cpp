/*
 * Q1.cpp
 *
 *  Created on: 06-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
#include <cmath>
using namespace std;
const double pi = 3.1415926535;

double area(double r);
double radius(double area);

int main(){
    double r1,r2,a1,a2;
    cout<<"r1 = ";
    cin>>r1;
    cout<<"r2 = ";
    cin>>r2;
    a1 = area(r1);
    a2 = area(r2);
    cout<<"(a) AC1 = "<<a1<<", AC2 = "<<a2<<endl;
    cout<<"(b) r3 = "<<radius(a1+a2);

}

double area(double r){
	return pi*r*r;
}

double radius(double area){
    return sqrt(area/pi);
}