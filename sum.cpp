#include<iostream>
using namespace std;
// printf => cout
// scanf => cin

float sum(float a,float b){
    return a+b;
}

int main() {
    float a,b;
    //printf("hello world");
    cout<<"hello world"<<endl;
    //scanf("%f%f",&a,&b);
    cin>>a>>b;
    float s=sum(a,b);
    //printf("\nsum=%f",s);
    cout<<endl<<"sum="<<s;
    return 0;
}