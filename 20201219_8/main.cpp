#include <iostream>
using namespace std;
int x,a,b,c,n1,n2,n3 ;

int main()
{

	cin >> x;

	a = x / 100;
	b = x / 10 % 10;
	c = x % 10;
	 n1 = x / 100 * 10 + x /10 % 10;
	 n2 = x / 100 * 10 + x % 10 ;
	 n3 = x / 10 % 10 * 10 + x % 10 ;
	cout << n1 << " " << n2<< " " << n3 << endl;
	
	if(a % 2 == 0 && b % 2 == 0  && c % 2 == 0){
		cout << 0 << endl;
	}
	 if( (a % 2 == 0 && b % 2 == 0 && c % 2 == 1) || 
		(a % 2 == 1 && b % 2 == 0 && c % 2 == 0) || 
		(a % 2 == 0  && b % 2 == 1 && c % 2 == 0)){
		 cout << 0 << endl;
	 } 
	 if(( a % 2 == 1 && b % 2 == 1 && c % 2 == 0) || 
	 (a % 2 == 1 && b % 2 == 0 && c % 2 == 1) ||
	 (a % 2 == 0 && b % 2 == 1 && c % 2 == 1)){
		 cout << 1 << endl;
	 }
	 if( a % 2 == 1 && b % 2 == 1 && c % 2 == 1 ){
		 cout << 3 << endl;
	 }
	
	 if (n1  > n2 && n1 > n3 && n2 > n3){
		 cout << n1 << " " << n2 << " " << n3;
	 } 
	 if(n1 > n3 && n1 > n2 && n3 > n2){
		 cout << n1 << " " << n3 << " " << n2;
	 }
	 if ( n2 > n1 && n2> n3 && n1 > n3){
		 cout<< n2 << " " << n1 << " " << n3;
	 }
	 if ( n2 > n3 && n2> n1 && n3 > n1){
		 cout << n2 << " " << n3 << " " << n1;
	 }
	 if (n3 > n2 && n3> n1 && n2 < n1){
		 cout << n3 << " " << n2 << " " << n1;
	 }
	 if(n3 > n1 && n3 > n2 && n1 > n2)
		 cout << n3 << " " << n1 << " " << n2;
	return 0;
}
