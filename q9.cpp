/*   Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.
Sample input : Please enter the no of lines 6
Sample output :
      2
     3 5
   7 11 13
  17 19 23 29
 31 37 41 43 47
53 59 61 67 71 73                            */

#include <iostream>

using namespace std;



bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Please enter the number of lines: ";
    cin >> n;

    int num = 2;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            while (!is_prime(num)) {
                ++num;
            }
            cout <<num<<" ";
            ++num;
        }
        cout << endl;
    }

    return 0;
}
