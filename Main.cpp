#include<iostream>
using namespace std;
int main()
{
	int arr[10]{ 1,2,3,4,5,6,7,8,9 };
	cout << "Original-->";
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << '\t';
	}cout << endl;
	cout << "reversed:\t";
	for (size_t i = 10 - 1; i != -1; i--)
	{
		cout << arr[i] << '\t';
	}cout << endl;
	return 0;
}