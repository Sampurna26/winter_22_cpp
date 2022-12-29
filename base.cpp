// using virtual function & pointer
#include<iostream>
using namespace std;
class Base{
    public:
      virtual void show(){
        cout<<"Base class";
    }
};
class Derv: public Base{
    public:
    void show(){
        cout<<"inside derived";
    }
};
int main(){
    Derv d;
    Base*ptr;
    ptr= &d;
    ptr-> show();
    return 0;
}
