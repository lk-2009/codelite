#include <iostream>
using namespace std;
int a,b,c;

int main()
{
    //Luka, type your code below!
	cin >> a >> b >> c;
	if(c < 8 && a > b){
		cout << a;
	}else if (c < 8 &&  b > a){
		cout << b;
	}else if (c < 8 && b < c){
		cout << c;
	}else if(c > 8 ){
		cout << a << " " << b << " " << c;
	}
	return 0;
}
