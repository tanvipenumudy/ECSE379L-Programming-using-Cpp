#include<iostream>
using namespace std;
class ques1{
    public:
        void area(float r);
        void area(int a);
        void area(int l, int b);
        void area(int l, int h, int w);        
};
void ques1::area(float r){
    cout<<"Area of the Circle is: "<<3.142*r*r<<"sq.units"<<endl;
}
void ques1::area(int a){
    cout<<"Area of the Square is: "<<a*a<<"sq.units"<<endl;
}
void ques1::area(int l, int b){
    cout<<"Area of the Rectangle is: "<<l*b<<"sq.units"<<endl;
}
void ques1::area(int l, int h, int w){
    cout<<"Area of the cuboid is: "<<2*(l*h+h*w+l*w)<<"sq.units";
}
int main(){
    float r;
    int a, l, b, ll, h, w;
    ques1 q1;
    cin>>r>>a>>l>>b>>ll>>h>>w;
    q1.area(r);
    q1.area(a);
    q1.area(l, b);
    q1.area(ll, h, w);
    return 0;
}