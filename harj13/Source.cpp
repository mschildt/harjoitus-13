/*	Ty�n nimi: Harjoitus 13
	Tekij�n nimi: Mikael Schildt

	Ty�n kuvaus:

	Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
	yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne
	lopuksi nayt�lle.


	a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
	tehd�ksesi merkkijonojen yhdist�misen
	b) Kayta string-kirjastoa (C++:n merkkijonot)
	tehd�ksesi merkkijonojen yhdist�misen  TEE, JOS ON AIKAA

	Esimerkki
	Anna etunimi: Aku
	Anna sukunimi: Ankka
	Nimesi oli: Aku Ankka

*/

#include <iostream>
using namespace std;

#include <cstring>


int main()
{
	char etunimi[30];
	char sukunimi[30];
	char vali[2] = " ";


	cout << "Anna etunimi: ";
	cin >> etunimi;
	cout << "Anna sukunimi: ";
	cin >> sukunimi;

	strcat_s(etunimi, vali);
	strcat_s(etunimi, sukunimi);
	cout << "Nimesi oli: " << etunimi << endl;





}