/* Write a program to print the cross pattern given below (in the shape of X): (Medium)
 
 *      *
  *   *
    *
  *   *
*       *          */

#include <iostream>

using namespace std;

int main(){
  int h;
  cout<<"give height for cross (odd number>=3):";
  cin>>h;
  for (int i=1;i<=h;i++){
    for (int j=1;j<=h;j++){
      if (i-j==0){
        cout<<"*";
      }else if(i+j==h+1){
        cout<<"*";
      }else{
        cout<<" ";

      }

    }
cout<<endl;
  }

}