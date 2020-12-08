#include <iostream>
using namespace std;

/**
A fost o dată un balaur cu 6 capete. 
 * Într-o zi Făt-Frumos s-a supărat şi i-a tăiat un cap. Peste noapte i-au crescut alte 6 capete în loc. 
 * Pe acelaşi gât! A doua zi, Făt-Frumos iar i-a tăiat un cap, dar peste noapte balaurului i-au crescut în loc alte 6 capete …
 şi tot aşa timp de n zile. În cea de a ( n+1 )-a zi, Făt-Frumos s-a plictisit şi a plecat acasă!

Scrieţi un program care citeşte de la tastatură n , numărul de zile, 
 * şi care afişează pe ecran câte capete avea balaurul după n zile.
 * **/

/** 
 * Iniţial balaurul avea 6 capete. În prima zi Făt-Frumos i-a tăiat un cap şi i-au rămas 5 . 
 * Peste noapte i-au crescut alte 6 , deci a doua zi dimineaţa balaurul avea 11 capete. 
 * În cea de a doua zi Făt-Frumos îi mai taie balaurului un cap, deci balaurul rămâne cu 10 capete. 
 * Peste noapte îi mai cresc 6 , astfel că a treia zi dimineaţă balaurul avea 16 capete. 
 * Dar în cea de a treia zi Făt-Frumos îi mai taie balaurului un cap, 
 * deci după cea de a treia zi balaurul a rămas cu 15 capete.
 * */

int n;

int main()
{
    //Luka, type your code below!
	cin >> n ;
	cout << n * 5 ;
	return 0;
}
