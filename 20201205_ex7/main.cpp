#include <iostream>
using namespace std;
int nr1,p1,nr2,p2,nr3,p3;
int main()
{
    //Luka, type your code below!
	cin >> nr1 >> p1 >> nr2 >> p2 >> nr3 >> p3;
	if(p1 > p2 && p1 > p3){
		cout << nr1 ;
	}else if (p2 >p1 && p2 > p3){
		cout << nr2 ;
	}else if (p3 > p2 && p3 >p1){
		cout << nr3 ;
	}
	return 0;
}
