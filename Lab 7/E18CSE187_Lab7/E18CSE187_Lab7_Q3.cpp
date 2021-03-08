/*
 * Q3.cpp
 *
 *  Created on: 06-Mar-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cin>>n1;
    cout<<"Difficulty:"<<endl;
    int arr1[n1];
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    cout<<"Marks:"<<endl;
    int arr2[n1];
    for(int i=0; i<n1; i++){
        cin>>arr2[i];
    }
    cin>>n2;
    cout<<"Student:"<<endl;
    int arr3[n2];
    for(int i=0; i<n2; i++){
        cin>>arr3[i];
    }

    int sum = 0;
    int *ptr1 = &arr1[0];
    int *ptr2 = &arr2[0];
    int *ptr3 = &arr3[0];
    for(int i=0; i<n2; i++){
        int k=0;
        ptr1 = &arr1[0];
        ptr2 = &arr2[0];
        for(int j=0; j<n1; j++){
            if(*ptr1<=*ptr3 && *ptr2>k){
                k=*ptr2;
            }
            ptr1++;
            ptr2++;
        }
        ptr3++;
        sum+=k;
    }
    cout<<sum;
    return 0;
}
