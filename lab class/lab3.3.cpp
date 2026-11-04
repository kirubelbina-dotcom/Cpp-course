#include <iostream>
using namespace std;

int sumArray(int arr[], int length) {
        int s = 0;
        for (int i = 0; i < length; i++) {
            s += arr[i];
        }
        return s;
    }

int main() {
int a[] = {5,10,15};
cout << sumArray(a, 3) << endl; 
cout << sumArray(a, 2) << endl;      
return 0;
}