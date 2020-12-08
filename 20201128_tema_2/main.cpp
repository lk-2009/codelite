#include <iostream>
using namespace std;
int S,d,r,m;
int main()
{
    //Luka, type your code below!
	cin >> S >> d >> r>> m;
	if (S>=d){
		cout << "drona";
	}else if (S >= r){
		cout << "robot";
	}else if ( S>= m ){
		cout << "masina";
	}else{
		cout << "nimic";
	}
	return 0;
}
