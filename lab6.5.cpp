#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Year:" << endl;
    cin >> a;
    if ((a % 100) > 0)
        a = a / 100 + 1;
    else
        a /= 100;
    cout << "Century=" << a;
}
