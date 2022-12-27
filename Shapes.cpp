#include<iostream>
using namespace std;
class Shapes{
    public:
        Shapes(int x){
            cout<<"area of sqaure="<<x*x<<endl;
        }
        Shapes(int l, int b ){
            cout<<"area of rectangle="<<l*b<<endl;
        }
        Shapes(double r){
            cout<<"area of circle="<<3.14*r*r<<endl;
        }
        
};
int main(){
    int x,l,b;
    double r;
    cout<<"enter the value of x=";
    cin>>x;
    Shapes sq(x);
    cout<<"enter the value of l,b=";
    cin>>l>>b;
    Shapes rectangle(l,b);
    cout<<"enter the value of r=";
    cin>>r;
    Shapes circle(r);
    return 0;
}