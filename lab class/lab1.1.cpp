#include <iostream>
using namespace std;
void greet();
int main()
{

    greet();
    cout << "back in main" << endl;
    return 0;
}

void greet() {
    cout << "hello from greet!" << endl;
}