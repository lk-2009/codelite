#include <iostream>

using namespace std;
int a, b, n1, n2;

int main()
{
    cin >> a >> b;
    n1 = a * 10 + b;
    n2 = b * 10 + a;
    cout << n1 << " " << n2;
}