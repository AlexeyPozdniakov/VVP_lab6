#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Input length of rectangle's sides:" << endl;
    cin >> a >> b;
    cout << "Input length of square's side:" << endl;
    cin >> c;
    d = (a / c) * (b / c);
    cout << "Amount of squares=" << d << endl;
    d = a * b - c * c * d;
    cout << "Empty area=" << d;
}
