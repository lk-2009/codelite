#include <iostream>
using namespace std;
int x,Min,Max,a,b,c;
int main()
{
    //Luka, type your code below!
	cin >> x;
	a = x / 100;
	b = x / 10 % 10;
	c = x % 10;
	if (a > b && a > c){
		Max =a;
	}else if(b > a && b > c){
		Max = b;
	}else {
		Max = c;
	}
	if (a < b && a < c){
		Min = a;
	}else if (b < a && b < c){
		Min = b;
	}else if (c < a && c < b){
		Min = c;
	}
	cout << Max << " " << Min;
	return 0;
}
