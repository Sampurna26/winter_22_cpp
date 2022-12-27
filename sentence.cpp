//counting the words in a sentence and printing the words in a separate line
#include<iostream>
using namespace std;
int main(){
    string str;
    int i,count=0;
    cout<<"enter the elements in the string=";
    getline(cin,str);
    int n=str.size();
    for(i=0;i<n;i++){
        if(str[i]==' '){
            count++;
            cout<<endl;
        }
        else{
            cout<<str[i];
        }
        
    }
    cout<<endl;
    cout<<"the no. of words="<<count+1;


    return 0;
}
