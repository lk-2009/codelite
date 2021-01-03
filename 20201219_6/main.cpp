#include <iostream>
using namespace std;
int x,m = 5 , f = 30, c = 50, s = 55;

int main()
{
 
	cin >> x;
	x >=85;
	if(x >= m + f +c){
		cout << "manusi fular caciula  " << x - (m + f + c) << endl;
	} if (x >= m + f + s){
		cout << "manusi fular sanie " << x - (m + f + s) << endl;
	}
	return 0;
}
