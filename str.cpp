#include<iostream>
using namespace std;
int main(){
    int i,count=0;
    string s;
    cout<<"enter the string=";
    cin>>s;
    int n=s.size();
    for(i=0;i<n;i++){
        if(s[i]=='a')
        count++;
    }
    cout<<"the no of elements a="<<count;
    return 0;
    
    
}