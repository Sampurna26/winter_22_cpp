#include<iostream>
using namespace std;
int main(){
    int i,max,min,n,j ;
    int array[n] ;
    cout<<"enter the size of n";
    cin>>n;
    cout<<endl<<n<<"enter the elements in n";
    for(i=0;i<n;i++)
    cin>>array[i];
    max=array[0];
    min=array[0];
    for(i=1;i<n;i++){
        if(array[i]>max)
        max=array[i];
        if(array[i]<min)
        min=array[i];
    }
    cout<<endl;
    cout<<"max="<<max<<"min="<<min<<endl;
    j=max;
    max=min;
    min=j;
    cout<<endl;
    cout<<"max="<<max<<"min="<<min<<endl;
    return 0;
    


}