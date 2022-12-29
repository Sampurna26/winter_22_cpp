#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    // vector
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(5);
    int n=arr.size();
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr.begin(),arr.end());
    cout<<"sorted order in ascending order:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"sorted order in descending order:"<<endl;
    sort(arr.rbegin(),arr.rend());
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //set
    multiset<int>S;
    cout<<"printing elements of set"<<endl;
    S.insert(10);
    S.insert(5);
    S.insert(1);
    S.insert(1);
    for(int it:S){
        cout<<it<<" ";
    }

    //map
    return 0;
}