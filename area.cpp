#include<iostream>
using namespace std;
class Area{
    int a,b;
    public:
        Area(){
            a=10;
            b=20;
        }
        void show_values(){
            cout<<a<<" "<<b<<endl;
        }
        void modify_values(int x,int y){
            a=x;
            b=y;
        }
};
int main(){
    Area a1;
    int x,y;
    cout<<"the values of a & b :"<<endl;
    //cout<<a1.a<<" "<<a1.b;
    a1.show_values();
    cout<<"provide 2 values x & y:"<<endl;
    cin>>x>>y;
    a1.modify_values(x,y);
    cout<<"the changed values:"<<endl;
    a1.show_values();
    return 0;
}