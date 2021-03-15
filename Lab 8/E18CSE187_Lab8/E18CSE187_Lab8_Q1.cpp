/*
 * Q1.cpp
 *
 *  Created on: 13-Mar-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

struct Date{
  int day;
  int month;
  int year;
};

struct Rainfall{
  struct Date date;
  int rainfall;
};

void getRainfallData(vector<struct Rainfall> *DataList){
  cout<<"Enter Data: "<<endl;
  struct Rainfall CollectData;
  int day, month, year, RainfallAmount;
  try{
    cout<<"Day: ";
    cin>>day;
    cout<<"Month: ";
    cin>>month;
    cout<<"Year: ";
    cin>>year;
    cout<<"Amount of Rainfall: ";
    cin>>RainfallAmount;
  }
  catch(const exception &err){
    cout<<"Invalid Data!";
    return;
  }
  CollectData.rainfall = RainfallAmount;
  CollectData.date.day = day;
  CollectData.date.month = month;
  CollectData.date.year = year;
  cout<<"Added Data!"<<endl;
  DataList->push_back(CollectData);
  return;
}

void printRainfallData(vector<struct Rainfall> *DataList){
  try{
    int dataSize = DataList->size();
    cout<<dataSize<<" Records Found!"<<endl;
    if(dataSize == 0)
      return;
    int start=9999, end=-9999;
    for(vector<struct Rainfall>::const_iterator i = DataList->begin(); i!=DataList->end(); ++i){
      if(start>=i->date.year) 
        start=i->date.year;
      if(end<=i->date.year) 
        end=i->date.year;
    }
    for(int y = start; y <= end; y++){
      for(int m = 1; m <= 12; m++){
        int records = 0;
        int totalRainfall = 0;
        for(vector<struct Rainfall>::const_iterator i = DataList->begin(); i != DataList->end(); ++i){
          if(i->date.month==m && i->date.year==y){
            totalRainfall+=i->rainfall;
            records++;
          }
        }
        int avgRainfall = 0;
        if(records>0){
          avgRainfall = (int)totalRainfall/records;
          cout<<"Average Rainfall in "<<m<<"/"<<y<<" is "<<avgRainfall<<" with "<<records<<" Records."<<endl;
        }
      }
    }
    cout<<"End of Records!"<<endl;
  }
  catch (const exception &err){
    cout<<"Can't be Fetched!";
  }
  return;
}

int main(){
  vector<struct Rainfall> DataList; 
  cout<<"Choose"<<endl<<"1: Add Entry"<<endl<<"2: Print Data"<<endl<<"3: Quit"<<endl;
  cout<<"Enter: ";
  int in;
  while((cin>>in) && in!=3){
    if(in==1) 
      getRainfallData(&DataList);
    if(in==2) 
      printRainfallData(&DataList);
    if(in!=1 && in!=2) 
      cout<<"Invalid Choice!"<<endl;
  }
  cout<<"Done!"<<endl;
  return 0;
}