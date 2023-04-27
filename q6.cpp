/* Write a program to print alphabet diamond pattern:


    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A                    */
    
#include <iostream>

using namespace std;

int main(){
    int h;
    cout<<"give height for diamond:";
    cin>>h;
    int cha=65;
    int num=0;
    for (int i = 1; i <= h; i++) {
// printing spaces
for (int j = h; j > i; j--) {
cout << " ";
}
// printing alphabets
for (int k = 0; k < i * 2 - 1; k++) {
cout << ((char)(cha+num++));
}
// set the number to 0
num = 0;
cout << "\n";
}
// downside pyramid
for (int i = 1; i <= h - 1; i++) {
// printing spaces
for (int j = 0; j < i; j++) {
cout << " ";
}
// printing alphabets
for (int k = (h - i) * 2 - 1; k > 0; k--) {
cout << ((char)(cha+num++));
}
// set num to 0
num = 0;
cout << "\n";
}
return 0;
}

