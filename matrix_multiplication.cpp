#include<iostream>
using namespace std;
int main(){
    int i,j,m,n,p;
    cout<<"enter the value of row and column";
    cin>>m>>n>>p;
    int a[m][n];
    int b[n][p];
    int c[m][p];
    cout<<"enter the matrix a"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the matrix b"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            cin>>b[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            c[i][j]=0;
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            for(int k=0; k<n;k++){
                // c[i][k]=a[i][k]*b[k][j];
                // c[i][j]=a[i][j]+b[i][j];
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            
            }
        }
    }
    cout<<"multiplying a and b"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
         cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}