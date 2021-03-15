/*
 * Q4.cpp
 *
 *  Created on: 13-Mar-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

struct NoCustomer{
  string name;
  int phone;
};

void AddCustomer(vector<struct NoCustomer> *list){
  int *n = NULL;
  n = new int;
  string *name = NULL;
  name = new string;
  cout<<"Name: ";
  cin>>*name;
  cout<<"Phone: ";
  cin>>*n;
  NoCustomer *NewCustomer = NULL;
  NewCustomer = new NoCustomer;
  NewCustomer->name = *name;
  NewCustomer->phone = *n;
  list->push_back(*NewCustomer);
  delete NewCustomer;
  delete n;
  delete name;
  return;
}

void print(vector<struct NoCustomer> *list){
  if(list->size() == 0){
    cout<<"None Added!"<<endl;
    return;
  }
  for(NoCustomer i : *list){
    cout<<"Name: "<<i.name<<" Phone: "<<i.phone<<endl;
  }
  return;
}

int main(){
  vector<NoCustomer> *list = NULL;
  list = new vector<NoCustomer>;
  int *in = NULL;
  in = new int;
  cout<<"Choose"<<endl<<"1: Enter Data"<<endl<<"2: Print"<<endl<<"0: Quit"<<endl;
  while((cin>>*in) && in!=0){
    switch(*in){
    case 0:
      cout<<"Done!"<<endl;
      delete in;
      delete list;
      return 0;
    case 1:
      AddCustomer(list);
      break;
    case 2:
      print(list);
      break;
    }
    cout<<"Choose"<<endl<<"1: Enter Data"<<endl<<"2: Print"<<endl<<"0: Quit"<<endl;
  }
}