//Write a program to calculate the factorial of a number.
#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"give number to find factorial of:";
    cin>>n;
    int prod=1;
    for (int i=1;i<=n;i++){
        if(n==0){
            break;
        }else{
            prod=prod*i;
        }
       
    } cout<<n<<"!="<<prod;

}