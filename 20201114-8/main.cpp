#include <iostream>

using namespace std;
int S, x, y, z, g, a, b;
int main()
{
    cin >> S >> x >> y >> z >> g;
    a = x * y + z * g;
    b = S - a;
    cout << a << " " << b;
}