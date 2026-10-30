#include <iostream>
using namespace std;

int main()
{

    float num = 42.8;
    int x = 5, y = 7;

    void show()
    {
        int y = 10;
        cout << x << " " << y;
    }

    int main()
    {
        float num = 26.4;
        show();
        cout << num << " " << ::num;
    }
    return 0;
}