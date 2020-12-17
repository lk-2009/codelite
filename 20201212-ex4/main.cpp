#include <iostream>
using namespace std;
int am, aM,rm,rM,vm,vM,a,r,v;
int main()
{
    //Luka, type your code below!
	cin >> am >> aM >> rm >> rM >> vm >> vM;
	cout << "total bile  = " << am + aM + rm + rM + vm + vM << endl;
	if (am + rm + vm > aM + rM + vM){
		cout << "sunt mai multe bile mici :" << am + rm + vm << endl;
	}else {
		cout << "sunt mai multe bile mari : " << aM + rM + vM << endl;
	}
	a = am + aM;
	r = rm + rM;
	v = vm + vM;
	if (a > r && a > v){
		cout << "cele mai multe sunt bilele albe "  << a << endl;
	}else if (r > a && r > v){
		cout << "cele mai multe sunt bilele rosii " << r << endl;
	}else {
		cout << "cele mai multe sunt bilele verzi "   << v<< endl;
	}
	return 0;
}
