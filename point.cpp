#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the values of n";
    cin>>n; 
    int arr[n];
    cout<<"enter the elements in arr";
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int *ptr=arr;
    cout<<"printing the elements of the array:"<<endl;
    for(i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }
    return 0;

}