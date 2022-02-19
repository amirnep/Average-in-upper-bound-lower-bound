#include<iostream>
#define m 1000
using namespace std;
int main()
{
	int a[m];
	int u, l, sum = 0, count = 0, s;
	cout << "Enter a size: ";
	cin >> s;
	for (int i = 0; i < s; i++)
	{
		cout << "Enter an integer: ";
		cin >> a[i];
	}
	for (int i = 0; i < s; i++)
	{
		cout << i << " is " << a[i] << endl;
	}
	cout << "Plese enter upper bound, lower bound: ";
	cin >> u >> l;
	for (int i = l + 1; i < u; i++)
	{
		count++;
		sum += a[i];
	}
	cout << "Ave is: " << sum / count;
}