#include <iostream>
using namespace std;

class Base1{
    protected: 
    int roll, math, science;
    public:
    void getInput1(){
        cin>>roll>>math>>science;
    }
};

class Base2{
    protected: 
    int sports;
    public:
    void getInput2(){
        cin>>sports;
    }
};

class Derived: public Base1, public Base2{
    int total, avg;
    public:
    void Output(){
        total = math+science+sports;
        avg = total/3;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Total marks: "<<total<<endl;
        cout<<"Average marks: "<<avg;
    }
};

int main(){
    Derived der;
    der.getInput1();
    der.getInput2();
    der.Output();
    return 0;
}