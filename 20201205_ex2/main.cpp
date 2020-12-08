#include <iostream>
using namespace std;
int x;
int main()
{
    //Luka, type your code below!
	cin >> x;
	if (x <= 25 && x > 0){
		cout << "alb" ;
	}else if (x <= 50 && x >25){
		cout << "rosu";
	}else if (x <= 75 && x > 50){
		cout << "albastru";
	}else if (x <= 100 && x > 75){
		cout << "negru";
	}
	return 0;
}
