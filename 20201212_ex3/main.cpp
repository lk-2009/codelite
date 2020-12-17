#include <iostream>
using namespace std;
int a,b;

int main()
{
    //Luka, type your code below!
	cin >> a >> b;
	if (a % 2 == 1 && b % 2 == 1 ){
		cout << "nu exista nr par";
	}else if (a % 2 == 1 && b % 2 == 0 ){
		cout << b;
	}else if (a % 2 == 0 && b % 2 == 0 && a > b){
		cout << a;
	}else {
		cout << b;
	}
	return 0;
}
