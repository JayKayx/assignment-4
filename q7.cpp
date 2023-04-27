/*Write a program to print + pattern given below : (Medium)
  *
  *
*****
  *
  * */

#include <iostream>

using namespace std;

int main(){
    int h;
    cout<<"give height for plus sign(odd number>=3):";
    cin>>h;
    for (int i=1;i<=h;i++){
        for (int j=1;j<=h;j++){
            if (i==(h+1)/2 || j==(h+1)/2){
                cout<<"*";

            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
}


