#include<iostream>
using namespace std;

//my prime function
bool check_prime (int x){
    int i;
    if (x==1){
        return false;
    }
    for(i=2;i<=x-1;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n,i,count=0;
    cout<<"enter the value of n=";
    cin>>n;
    cout<<endl;
    int a[n];
    cout<<"enter n elements :";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    // input part done

    for(i=0;i<n;i++){
        if (check_prime(a[i])==true){
            count++;
        }
    }
    cout<<"no of prime elements= "<<count;
    
    
    return 0;
}
