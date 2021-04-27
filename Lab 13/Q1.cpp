#include <iostream>  
#include <cstring>  
using namespace std; 

class String{ 
    private:
        char str[100];
    public:
        void getInput(){
            cin>>str;
        }
        void print(){
            cout<<"The Concatenated String is    :  "<<str;  
        }  
    String operator + (String s1){
        String s2;  
        strcat(str, s1.str);
        strcpy(s2.str, str);  
        return s2;  
    }  
};  
int main()  
{  
    String s1, s2, s3, res;
    s1.getInput();
    s2.getInput();
    s3.getInput();
    res = s1+s2+s3;
    res.print();
    return 0;
}   