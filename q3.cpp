//Write a program to find the sum of n natural numbers.
#include <iostream>

using namespace std;

int main(){
    int sum=0;
    int n;
    cout<<"write n to find sum of n natural numbers:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;

}
