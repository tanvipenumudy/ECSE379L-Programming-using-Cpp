#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class ProblemSolution{
    public:
    ProblemSolution(int N1,int N2){
        cout<<N1+N2;
        return;
    }
    ProblemSolution(int N1,int N2,int N3){
        cout<<N1+N2+N3;
        return;
    }
};

int main(){
    int N1,N2,N3;
    cin>>N1;
    cin>>N2;
    cin>>N3;
    ProblemSolution problemSolution = ProblemSolution(N1,N2);
    cout<<endl;
    ProblemSolution problemSolution1 = ProblemSolution(N1,N2,N3);
    
}