#include <iostream>
using namespace std;

class ProblemSolution{
    public:
    ProblemSolution(){}
    
    ~ProblemSolution(){
        cout<<"Destructor called";
    }
};

int main(){
    ProblemSolution problemSolution;
    return 0;
}