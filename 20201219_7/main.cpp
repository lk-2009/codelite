#include <iostream>
using namespace std;
int x, a, b; 
int main()
{
   
    cin >> x;
    a = x / 10;
    b = x % 10;
    cout << "a: " << a << endl << "b: " << b << endl;
    if(x < 10) {
	cout << "clatita cu branza dulce si stafide ";
    } else if(x < 100 && x == a * 10 + b &&
					((a % 2 == 0 && b % 2 == 0) || 
					(a % 2 == 1 && b % 2 == 1))) {
	cout << "clatita cu dulceata de afine ";
    } else if(x < 100 && x == a * 10 + b &&
					((a % 2 == 0 && b % 2 == 1) || 
					(b % 2 == 0 && a % 2 == 1))) {
	cout << "clatita cu finetti ";
    } else if(x < 100 && x == a * 10 + b)
	cout << "clatite cu prune ";
    else if(x > 99) {
	cout << "clatita cu branza dulce si stafide    ";
    }

    return 0;
}
