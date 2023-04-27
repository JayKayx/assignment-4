//Write a C++ program to print a rectangle out of *

#include <iostream>

using namespace std;

int main(){
    int n,m;
    cout<<"enter starrow*:";
    cin>>n;
    cout<<"enter starcolumn*:";
    cin>>m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}