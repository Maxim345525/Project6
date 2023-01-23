#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	int sum;
	const uint32_t size = 5;
	int arr[size];
	cin >> sum;
	cout << "Input storona a:";
	cin >> a;
	cout << "Input storona b:";
	cin >> b;
	cout << "Input storona c:";
	cin >> c;
	cout << "Input storona d:";
	cin >> d;
	cout << "Input storona å:";
	cin >> e;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	sum = a + b + c + d + e;
	cout << "Perumetr--> " << sum << endl;
	return 0;
}