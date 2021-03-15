/*
 * Q3.cpp
 *
 *  Created on: 13-Mar-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

class Student{
  public:
  int rollNo;
  string name;
  Student(int rollNo, string name);
};

class ClassRoom{
  vector<Student> students;
  public:
  void addStudent();
  void getAllStudents();
};

Student::Student(int studentRollNo, string studentName){
  rollNo = studentRollNo;
  name = studentName;
  return;
}

void ClassRoom::addStudent(){
  if(students.size()>10){
    cout<<"Max Count Exceeded!"<<endl;
    return;
  }
  int rollNo;
  string name;
  cout<<"Name: ";
  cin>>name;
  cout<<"Roll No: ";
  cin>>rollNo;
  Student student(rollNo, name);
  students.push_back(student);
  cout<<"Added Successfully!"<<endl;
  return;
}

void ClassRoom::getAllStudents(){
  if(students.size()==0){
    cout<<"None Added!"<<endl;
    return;
  }
  for(Student x:students)
    cout<<x.rollNo<<": "<<x.name<<endl;
  return;
}

int main(){
  int in;
  ClassRoom class_room;
  cout<<"Choose"<<endl<<"1: Add Student"<<endl<<"2: Print Details"<<endl<<"0: Quit"<<endl;
  while((cin>>in) && in!=0){
    switch(in){
    case 0:
      cout<<"Done!"<<endl;
      return 0;
      break;
    case 1:
      class_room.addStudent();
      break;
    case 2:
      class_room.getAllStudents();
      break;
    default:
      cout<<"Invalid Choice!"<<endl;
      break;
    }
    cout<<"Choose"<<endl<<"1: Add Student"<<endl<<"2: Print Details"<<endl<<"0: Quit"<<endl;
  }
  return 0;
}