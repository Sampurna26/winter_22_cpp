// a++ means postfix, ++a means prefix, so b=++a means first adding 1 to a, then storing it in b, and b=a++ meaans
// storinng the value of a in b, and then adding 1 to a
#include<iostream>
using namespace std;
int main(){
    int a=10,b;
    b=a++;
    cout<<"a="<<a<<" b="<<b<<endl;
    return 0;
}