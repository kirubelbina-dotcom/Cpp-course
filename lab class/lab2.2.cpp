#include <iostream>
using namespace std;

void swapVal(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

void swapRef(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{

    int x = 5, y = 10;
    swapVal(x, y);
    cout << x << " " << y << endl;
    swapRef(x, y);
    cout << x << " " << y << endl;

    return 0;
}