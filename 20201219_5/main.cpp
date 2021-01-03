#include <iostream>
using namespace std;
int g,b;

int main()
{
   
	cin >> g >> b;
	if (b % g == 0 ){
		cout << "curcanul primeste 0 boabe";
	}else if (b % g >= 1){
		cout << "curcanul primeste cu    " << b % g << "   boabe mai mult ";
	}else{
		cout << "curcanul primeste 0 boabe";
	}
	return 0;
}