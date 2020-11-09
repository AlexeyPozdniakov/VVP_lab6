#include <iostream>
using namespace std;
int main()
{
	int k;
	cout << "Input day number:" << endl;
	cin >> k;
	if ((k < 1) or (k > 365))
		cout << "Doesn't come up with condition";
	else
	{
		k %= 7;
		cout << "Number of weekday=" << k;
	}
}