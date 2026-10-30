#include <iostream>
using namespace std;

int absolute(int x)
{
    if (x < 0)
        return -x;
    return x;
}

double absolute(double x)
{
    if (x < 0)
        return -x;
    return x;
}

int main()
{

    cout << absolute(-5) << endl;
    cout << absolute(-2.5) << endl;

    return 0;
}