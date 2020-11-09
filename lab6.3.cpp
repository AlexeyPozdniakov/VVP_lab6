#include <iostream>
using namespace std;
int main()
{
	int k, n;
	cout << "Input day number:" << endl;
	cin >> k;
	cout << "First day of week:" << endl;
	cin >> n;
	if ((k < 1) or (k > 365) or (n < 1) or (n > 7))
		cout << "Doesn't come up with condition";
	else
	{
		k -= (n - 1);
		k %= 7;
		if (k == 0)
			k = 7;
		cout << "Day number=" << k;
	}
}