#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Seconde since beginning of day:" << endl;
    cin >> n;
    n %= 60;
    cout << "Seconds since beginning of last minute=" << n;
}