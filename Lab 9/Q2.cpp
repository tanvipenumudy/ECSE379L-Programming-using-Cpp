#include <iostream>
using namespace std;

class Rectangle{
    public:
    double x, y, width, height;
    Rectangle(){
        x = y = 0.0;
        width = height = 1.0;
    }
    Rectangle(double x1, double y1, double width1, double height1){
        x = x1;
        y = y1;
        width = width1;
        height = height1;
    }
    int getArea(){
        return width*height;
    }
    int getPerimeter(){
        return 2*(width+height);
    }
    bool contains(double x1, double y1){
        if(x1<x-(width/2)) return false;
        if(y1<y-(height/2)) return false;
        if(x1>x+(width/2)) return false;
        if(y1>y+(height/2)) return false;
        return true; 
    }
};

int main(){
    double x, y, width, height, x1, y1;
    cin>>x;
    cin>>y;
    cin>>height;
    cin>>width;
    cin>>x1;
    cin>>y1;
    
    Rectangle rect = Rectangle();
    cout<<rect.getPerimeter()<<endl<<rect.getArea()<<endl<<boolalpha<<rect.contains(0.5,0.1)<<endl;
    
    Rectangle rect1 = Rectangle(x, y, width, height);
    cout<<rect1.getPerimeter()<<endl<<rect1.getArea()<<endl;
    
    if(width==0 || height==0){
        cout<<boolalpha<<false<<endl;
    }
    else{
        cout<<boolalpha<<rect1.contains(x1,y1)<<endl;
    }
}