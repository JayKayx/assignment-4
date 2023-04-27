//Write a program to print all Armstrong numbers between 100 to 500.
#include <iostream>
#include <cmath>

using namespace std;

void armstrong(int num1){
    int sum=0;
    int x=num1;
    while (x!=0){
        sum=sum+pow(x%10,3);
        //sum = sum+((x%10)*(x%10)*(x%10));
        x=x/10;

    }
    if (num1==sum){
        cout<<num1<<endl;;
    }
    return;
    }

int main(){
    for(int i=0;i<=500;i++){
        armstrong(i);
        }
        return 0;
    }
