#include <iostream>
using namespace std;

class complex{
    int r, i;
    public:
        complex(int a = 0, int b = 0){
            r = a;
            i = b;
        }
        void getInput(){
            cin>>r>>i;
        }
        void operator + (complex);
        void operator - (complex);
};

void complex::operator + (complex c1){
    complex c2;
    c2.r = r + c1.r;
    c2.i = i + c1.i;
    if(c2.i>=0){
        cout<<c2.r<<"+"<<c2.i<<"i"<<endl;
    }
    else{
        cout<<c2.r<<c2.i<<"i"<<endl;
    }
}

void complex::operator - (complex c1){
    complex c2;
    c2.r = r - c1.r;
    c2.i = i - c1.i;
    if(c2.i>=0){
        cout<<c2.r<<"+"<<c2.i<<"i"<<endl;
    }
    else{
        cout<<c2.r<<c2.i<<"i"<<endl;
    }
}
int main(){
    complex c1, c2;
    complex c3(0,0), c4(0,0);
    c1.getInput();
    c2.getInput();
    cout<<"Input Values:"<<endl;
    c1+c3;
    c2+c4;
    cout<<"Result:"<<endl;
    c1+c2;
    c1-c2;
    return 0;
}
