/* Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
Eg. Sample Input - Enter a +ve Integer : 14
Sample Output –
14 = 3 + 11
14 = 7 + 7*/
#include<iostream>
using namespace std;

bool checkprime(int num){
    bool x=true;
    for (int i=2;i<num;i++){
        if(num%i==0){
            x=false;
            break;
        
        }
    
    }
return x;

}

int main(){
    int num;
    cout<<"enter a positive integer:";
    cin>>num;
    for (int i=2;i<=num/2;i++){
        if (checkprime(i)){
            if (checkprime(num-i)){
                cout<<num<<"="<<i<<"+"<<num-i<<endl;;
                }
            }
        }
    }
