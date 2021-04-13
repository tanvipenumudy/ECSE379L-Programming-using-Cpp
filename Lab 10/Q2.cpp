#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class Base{
    private: 
    int n;
    public:
    void getInput(){
        cin>>n;
    }
    int returnInput(){
        return n;
    }
};

class Square: public Base{
    public:
    int getSquare(){
        int n;
        n = returnInput();
        return n*n;
    }
};

class Cube: public Base{
    public:
    int getCube(){
        int n;
        n = returnInput();
        return n*n*n;
    }
};

int main(){
    Square square;
    square.getInput();
    cout<<"Square is: "<<square.getSquare()<<endl;
    Cube cube;
    cube.getInput();
    cout<<"Cube is: "<<cube.getCube();
    return 0;
}