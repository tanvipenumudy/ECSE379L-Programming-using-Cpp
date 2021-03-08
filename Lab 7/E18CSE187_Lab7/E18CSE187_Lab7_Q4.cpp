/*
 * Q4.cpp
 *
 *  Created on: 06-Mar-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <iostream>
using namespace std;

void read_array(int arr[], int l){
	for(int i=0; i<l; i++){
		cin>>arr[i];
	}
}

void arrange_array(int arr[], int l){
    int temp;
	for(int i=0; i<=l; i++){
        for(int j=0; j<=l-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void display_array(int arr[], int l){
	int *ptr= &arr[0];
	for(int i=0; i<l; i++){
        cout<<*ptr<<" ";
		ptr++;
	}
    cout<<endl;
}

int binarysearch(int arr[], int l, int r, int key){
	if(l<=r){
		int mid = (r+l)/2;
		if(arr[mid]==key){
			return mid;
		}
        else if(arr[mid]>key){
		    return binarysearch(arr, l, mid-1, key);
		}
        return binarysearch(arr, mid+1, r, key);
	}
	return -999;
}

int main(){
	int n, key;
	cin>>n;
	int arr[n];
	read_array(arr, n);
	arrange_array(arr, n);
	display_array(arr, n);
	cin>>key;
        cout<<binarysearch(arr, 0, n-1, key);
	return 0;
}
