/*
 * Q2.cpp
 *
 *  Created on: 14-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.1415926535

double area(double r);
double area(double l, double b);
double area(double a, double b, double c);

int main(){
    int in = 0;
    cout<<"1. Area of Sphere"<<endl<<"2. Area of Rectangle"<<endl<<"3. Area of Triangle"<<endl<<"4. Quit"<<endl;
    
    while(in!=4){
        cout<<"Select: ";
        cin>>in;
        if(in == 1){
            double r;
            cout<<"Radius: ";
            cin>>r;
            cout<<"Area of Sphere: "<<area(r)<<endl;
        }

        else if(in == 2){
            double l, b;
            cout<<"Length: ";
            cin>>l;
            cout<<"Breadth: ";
            cin>>b;
            cout<<"Area of Rectangle: "<<area(l, b)<<endl;
        }

        else if(in == 3){
            double a, b, c;
            cout<<"Side 1: ";
            cin>>a;
            cout<<"Side 2: ";
            cin>>b;
            cout<<"Side 3: ";
            cin>>c;
            cout<<"Area of Triangle: "<<area(a, b, c)<<endl;
        }

        else if(in == 4){
            break;
        }

        else{
            cout<<"Enter Valid Key!"<<endl;
        }
    }

    return 0;
}

double area(double r){
    return (4*PI*r*r);
}

double area(double l, double b){
    return (l*b);
}

double area(double a, double b, double c){
    int s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}