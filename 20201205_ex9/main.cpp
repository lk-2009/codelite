#include <iostream>
using namespace std;
char a;

int  main()
{
    //Luka, type your code below!
	cin >> a; 
	if(a == 'a' || a == 'A' || a == 'e' || 
		a == 'E' || a == 'i' || a == 'I' || 
		a == 'o' || a == 'O' || a == 'u' || 
		a == 'U'){
			cout << "Vocala";
		} else {
			cout << "Consoana";
		}
}
