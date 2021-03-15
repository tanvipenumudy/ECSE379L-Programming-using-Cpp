/*
 * Q2.cpp
 *
 *  Created on: 13-Mar-2021
 *      Author: Tanvi Penumudy (E18CSE187)
 */

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Employee{
  struct EmployeeDetails{
    int id;
    string name;
    string designation;
    double salary;
  };
  vector<EmployeeDetails> employees;
  public:
  void getEmployeeData(int NoOfEmployees);
  void addEmployeeData(int id, string name, string design, double sal);
  void printEmployeeData();
};

void Employee::printEmployeeData(){
  for(EmployeeDetails e:employees){
    if(e.salary>20000){
      cout<<e.id<<" "<<e.name<<" "<<e.designation<<" "<<e.salary<<endl;
    }  
  }
  return;
}

void Employee::getEmployeeData(int NoOfEmployees){
  try{
    while(NoOfEmployees>0){
      int id;
      string name;
      string designation;
      double salary;
      cout<<"ID: ";
      cin>>id;
      cout<<"Name: ";
      cin>>name;
      cout<<"Designation: ";
      cin>>designation;
      cout<<"Salary: ";
      cin>>salary;
      addEmployeeData(id, name, designation, salary);
      NoOfEmployees--;
    }
  }
  catch(const exception &e){
    cerr<<"Invalid Details!"<<endl;
  }
  return;
}

void Employee::addEmployeeData(int id, string name, string design, double sal){
  EmployeeDetails employee;
  employee.id = id;
  employee.name = name;
  employee.designation = design;
  employee.salary = sal;
  employees.push_back(employee);
  return;
}

int main(){
  int in;
  cout<<"No. of Employees: ";
  cin>>in;
  Employee emp_data;
  emp_data.getEmployeeData(in);
  cout<<"Salary > 20,000"<<endl;
  emp_data.printEmployeeData();
  return 0;
}