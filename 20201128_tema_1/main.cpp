#include <iostream>
using namespace std;
int S, c, n;
int main()
{
    cin >> S >> c >> n;
    if (S % c == 0){
		cout << "C";
	}else if (S % n == 0){
		cout << "N";
	}else{
		cout << "nimic";
	}
	return 0;
}
