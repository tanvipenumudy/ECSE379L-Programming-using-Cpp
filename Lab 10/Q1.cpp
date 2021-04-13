#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class Shape{
   public:
      void setWidth(int w){
         width = w;
      }
      void setHeight(int h){
         height = h;
      }    
   protected:
      int width;
      int height;
};

class PaintCost{
   public:
      int getCost(int area, int z){
         return area*z;
      }
};

class Rectangle: public Shape, public PaintCost{
   public:
      int getArea(){
         return width*height; 
      }
};

int main(void){
   Rectangle Rect;
   int area;
   int x,y,z; 
   cin >> x;
   cin >> y;
   cin >> z;   
   Rect.setWidth(x);
   Rect.setHeight(y);
   area = Rect.getArea();
   cout<<"Total area: "<<Rect.getArea()<<endl;
   cout<<"Total paint cost: $"<<Rect.getCost(area,z)<<endl;
   return 0;
}