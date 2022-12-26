

#include<iostream>
using namespace std;
int main(){
    int i,max,min,n,j,position ;
    cout<<"enter the size of n=";
    cin>>n;
    int array[n];
    int max_position, min_position;
    cout<<endl<<"enter the elements in n=";
    for(i=0;i<n;i++)
    cin>>array[i];
    max=array[0];
    min=array[0];
    for(i=1;i<n;i++){
        if(array[i]>max){
            max=array[i];
            max_position=i;

        }
        if(array[i]<min){
            min=array[i];
            min_position=i;
        }
    }
    cout<<"the max number of array="<<max<<endl;
    cout<<"the min number of array="<<min;
    j=array[max_position];
    array[max_position]=array[min_position];
    array[min_position]=j;
    cout<<endl;
    
    cout<<"the new swapped array :"<<endl;
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
    


}
