#include <iostream>
using namespace std;

   long factorial(long n) {
        if (n <= 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
int main() {

    for (int i = 0; i <= 5; i++) {
        cout << i << "! = " << factorial(i) << endl;
    }
 
return 0;
}