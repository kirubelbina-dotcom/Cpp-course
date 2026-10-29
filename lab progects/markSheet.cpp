#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    char names[5][20];
    float marks[5][3];
    float average[5];
    double total[5] = {0};
    double top = 0;

    for (int i = 0; i < 5; i++)
    {

        cout << "enter the" << " " << i + 1 << " student name : \t ";
        cin.getline(names[i], 20);

        for (int m = 0; m < 3; m++)
        {

            cout << "enter student's mark" << " " << m + 1 << " : \t" << endl;
            cin >> marks[i][m];
            total[i] += marks[i][m];
        }
        cin.ignore();
        average[i] = total[i] / 3;

        if (total[i] > top)
        {
            top = total[i];
        }
    }

    cout << left << setw(20) << "name" << setw(10) << "M1" << setw(10) << "M2" << setw(10) << "M3" << setw(10) << "Total" << setw(10) << "Avg" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << left << setw(20) << names[i]
             << setw(10) << marks[i][0]
             << setw(10) << marks[i][1]
             << setw(10) << marks[i][2]
             << setw(10) << total[i]
             << setw(10) << average[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        if (top == total[i])
        {
            cout << "\n\n The top student is :" << " " << names[i];
            break;
        }
    }
    

return 0;
}