/****
Teht‰v‰: Harjoitus 5
Tekij‰: Joni Laine
PVM: 10.9.2013

Kuvaus:
Kirjoita ohjelma, joka pyyt‰‰ k‰ytt‰j‰lt‰ kaksi kokonaislukua.
Ohjelma tulostaa tekstin BINGO, mik‰li luvut ovat samoja.
Muussa tapauksessa ohjelma tulostaa tekstin BONGO.

*****/
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cout <<"Anna numero: ";
	cin >>a;
	cout <<"Anna numero: ";
	cin >>b;
	if (a == b)
	cout <<"BINGO" << endl;
	else if (a!=b)
	cout <<"BONGO" << endl;
}


