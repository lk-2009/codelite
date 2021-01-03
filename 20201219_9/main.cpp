#include <iostream>
using namespace std;
int n, a, b;

int main()
{
  
	cin >> n >> a >> b;
	if(n % a > n % b){
		cout << "a doua zi";
	}
	if ( n % a < n % b){
		cout << "prima zi";
	}
	if ( n % a == n % b ){
		if(a > b){
			cout << "prima zi";
		}
		if (b > a){
			cout << "a doua zi";
		}
	}
	return 0;
}
