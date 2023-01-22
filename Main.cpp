#include <iostream>
using namespace std;
int main()
{
    int r1, r2;
    const int size = 12;
    int arr[size];
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter pribil:" << endl;
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    system("pause");
    return 0;
}

