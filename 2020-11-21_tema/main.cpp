#include <iostream>

using namespace std;
int a, b;

int main()
{
    // Luka, type your code below!
    cin >> a >> b;
    
    if(a % 10 == 2) {
		cout << a + b;
    } else {
		cout << a * b;
    }

    return 0;
}
