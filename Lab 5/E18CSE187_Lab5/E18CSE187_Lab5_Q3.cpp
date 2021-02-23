/*
 * Q3.cpp
 *
 *  Created on: 20-Feb-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include<iostream>
#include<string>
using namespace std;

int compare(int N1, int N2){
    if(N1>N2){
        return 1;
    }
    else if(N1==N2){
        return 0;
    }
    else{
        return -1;
    }
}

int compare(char N1, char N2){
    if(int(N1)>int(N2)){
        return 1;
    }
    else if(int(N1)==int(N2)){
        return 0;
    }
    else{
        return -1;
    }
}

int compare(string N1, string N2){
    if(N1.size()>N2.size()){
        return 1;
    }
    else if(N1.size()==N2.size()){
        return 0;
    }
    else{
        return -1;
    }
}

int main(){
    int in = 0;
    cout<<"1. Compare Integer"<<endl<<"2. Compare Character"<<endl<<"3. Compare String"<<endl<<"4. Quit"<<endl;

    while(in!=4){
        cout<<"Choose: ";
        cin>>in;
        switch(in){
            case 1:{
                int N1,N2;
                cin>>N1>>N2;
                cout<<compare(N1,N2)<<endl;
                break;
            }
            case 2:{
                char N1,N2;
                cin>>N1>>N2;
                cout<<compare(N1,N2)<<endl;
                break;
            }
            case 3:{
                cin.ignore();
                string N1,N2;
                getline(cin,N1);
                getline(cin,N2);
                cout<<compare(N1,N2)<<endl;
                break;
            }
            case 4:{
                break;
            }
            default:{
                cout<<"Enter Valid Key!"<<endl;
                break;
            }
        }
    }

    return 0;
}