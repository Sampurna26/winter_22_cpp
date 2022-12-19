// Program to calculate the mean of 'n' array elements, taking 'n' array elements as user input.

#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    double mean;
    cout<<"enter the value of n";
    cin>>n;
    int a[n];
    cout<<"enter the elements of n";
    for(i=0;i<n;i++){
        cin>>a[i];
        sum= sum+a[i];
    }
    mean= (double)sum/n;            // type casting, to change the data type explicitly to get correct value of mean
    cout<<"The mean is = "<<mean;

    return 0;
}
