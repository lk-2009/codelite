#include <iostream>
using namespace std;
int a,b,c;
int main()
{
    //Luka, type your code below!
	cin >>a >> b >> c;
	 if (a <b && a < c && b < c){
		 cout << a << " " << b << " " << c;
	 }else if (a <b && a < c && c < b){
		 cout << a << " " << c << " " << b;
	 }else if (b < a && b < c && a > c){
		  cout << b << " " << c << " " << a;
	 }else if (b < a && b < c && a  < c){
		 cout << b << " " << a << " " << c;
	 }else if (c< a && c < b && b  <a ){
		 cout << c << " " << b << " " << a;
	 }else if (c< a && c < b && b  >a ){
		 cout << c << " " << a << " " << b;
	 }
	return 0;
}
