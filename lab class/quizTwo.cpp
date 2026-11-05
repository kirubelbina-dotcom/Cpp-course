#include <iostream>
using namespace std;

int a[5];
int input()
{
    cout << "enter 5 integers " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return 0;
};

int SUM(int a[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    cout << " the sum of the five nmbers is : " << sum << endl;
    return sum;
};

void MUL(int a[])
{
    int mul = 1;
    for (int i = 0; i < 5; i++)
    {
        mul *= a[i];
    }
    cout << " the product of the five nmbers is : " << mul << endl;
};

void AVE(int a[])
{
    int sum = SUM(a);
    int average = sum / 5;
    cout << "the average is : " << average << endl;
}

int MIN(int a[])
{
    int minimum = a[0];
    for (int i = 1; i < 5; i++)
    {
        if (a[i] < minimum)
        {
            minimum = a[i];
        }
    }
    return minimum;
}

int MAX(int a[])
{
    int maximum = a[0];
    for (int i = 1; i < 5; i++)
    {
        if (a[i] > maximum)
        {
            maximum = a[i];
        }
    }
    return maximum;
}

void RANGE(int a[])
{
    int max = MAX(a);
    int min = MIN(a);
    cout << " the range of the given integers is : " << max - min << endl;
}
int main()
{
    input();
    SUM(a);
    MUL(a);
    int max = MAX(a);
    cout << "the maximum is : " << max << endl;
    int min = MIN(a);
    cout << "the minimum is : " << min << endl;
    AVE(a);
    RANGE(a);

    return 0;
}