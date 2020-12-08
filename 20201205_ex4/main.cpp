#include <iostream>
using namespace std;
int  x;
int main()
{
    //Luka, type your code below!
	cin >> x;
	if (x > 0 && x < 26){
		cout << "Clasa A";
	} else if (x > 25 && x < 51){
		cout << "Clasa B";
	} else if (x > 50 && x < 76){
		cout << "Clasa C";
	} else if (x >75 && x < 101){
		cout << "Clasa D";
	} else if (x > 100 && x < 126){
		cout << "Clasa E";
	}
	return 0;
}
