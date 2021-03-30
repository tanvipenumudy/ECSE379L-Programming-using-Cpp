#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class Time{
    private:
    int second, minute, hour;
    public:
    Time(int t){
        hour = t/(3600)%24;
        minute = ((t-(hour*3600))/60)%60;
        second = (t%(86400))%60;
        return;
    }
    string getTime(){
        string hr, min, sec;
        hr = to_string(hour);
        min = to_string(minute);
        sec = to_string(second);
        string hh, mm, ss;
        if(hour>9){
            hh = hr;
        }
        else{
            hh = '0'+hr;
        }
        if(minute>9){
            mm = min;
        }
        else{
            mm = '0'+min;
        }
        if(second>9){
            ss = sec;
        }
        else{
            ss = '0'+sec;
        }
        string ans = hh+":"+mm+":"+ss;
        return ans;
    }
};

int main(){
    long int N;
    cin>>N;
    Time currentTime(N);
    cout<<currentTime.getTime();
    return 0;
}