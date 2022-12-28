#include<iostream>
using namespace std;
class shape{
    protected:
    string color;
    int area;
    public:
    void draw(){
        color="WHITE";
        area=0;
        cout<<"color inside shape class:"<<color<<endl;
        cout<<"area inside shape class:"<<area<<endl;
    }
    void show(){
        cout<<"I am inside class shape"<<endl;
    }
};
class square: public shape{
    int side;
    public:
    square(){
        side=0;
    }
    square(int x){
        side=x;
    }
    void draw(){
        shape::draw();
        color="RED";
        area=side*side;
        cout<<"Area = "<<area<<endl<<"Color = "<<color<<endl;
    }
};
int main(){
    square sq(10);
    sq.show();
    sq.draw();
    return 0;
}