#include <iostream>
using namespace std;
int n,x;

int main()
{
    //Luka, type your code below!
	cin >> x ;
	if (n % 4 !=0){
	n = x/4 + 1;
	}else {
		n = x/4 ;
	}
	cout << " Casuta in care se afla Ionel " << n;
	return 0;
}
