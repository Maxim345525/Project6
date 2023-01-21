#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, y, i, j;
    int operation;
    cout << "1 - ex" << endl;
    cout << "Enter operation ->";
    cin >> operation;
    switch (operation)
    case 1:
    {
        int row, column;
        cout << "row -  ";
        cin >> row;
        cout << "col -  ";
        cin >> column;
        char sym;
        cout << "sym - ";
        cin >> sym;
        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= column; j++)
                cout << sym;
            cout << endl;
        }break;
    }
    return 0;
}

