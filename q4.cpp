// Write a program to reverse a given integer number.
#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter number n:";
    cin>>n;
    int x=n;
    int newnum=0;
    while(x>0){
        int lastdig=x%10;
        newnum=newnum*10+lastdig;
        x=x/10;
    }
    cout<<newnum;

}