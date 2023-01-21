#include<iostream>
using namespace std;
int main()
{
		int Summ[6];
		for (int i = 0; i < 6; i++)
		{
			cout << i + 1 << ": ";
			cin >> Summ[i];
		}
		int sum = 0;
		for (int i = 0; i < 6; i++)
		{
			sum += Summ[i];
		}
		cout << endl << "Summ 6 months: " << sum;
		system("pause");
		return 0;
	}
