// addition of 2 matrix
#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"enter the value of row and column";
    cin>>m>>n;
    int a[m][n];
    int b[m][n];
    int c[m][n];
    //data entered in the matrix a
    cout<<"enter the matrix a"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the matrix b"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            
        }
    }
    cout<<"adding the matrix a and b"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
    
    
}
