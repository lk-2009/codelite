#include <iostream>
using namespace std;
int a ,  b , c;

int main()
{
    //Luka, type your code below!
	cin >> a >> b >> c;
if (a >= 0 && b >= 0 && c >= 0){
	if (b > c){
		cout << b;
	}else {
		cout << c;
	}
} else {
	cout << a + b ;
}
	return 0;
}
