#include <iostream>
using namespace std;
struct st{
    int hr,min,sec;
};
int main(){
    st time1,time2,time3;
    cout<<" enter the first time=";
    cin>>time1.hr>>time1.min>>time1.sec;
    cout<<endl;
    cout<<"enter the second time=";
    cin>>time2.hr>>time2.min>>time2.sec;
    cout<<endl;
    time3.sec=time1.sec+time2.sec;
    time3.min=time1.min+time2.min;
    time3.hr=time1.hr+time2.hr;
    if(time3.sec>=60){
        time3.min=time3.min+1;
        time3.sec=time3.sec-60;
        
        
    }
    if(time3.min>=60){
        time3.hr=time3.hr+1;
        time3.min=time3.min-60;
    }
    if(time3.hr>=24){
        time3.hr=time3.hr-24;
    }
    cout<<time3.hr<<":"<<time3.min<<":"<<time3.sec;
    return 0;

    
}