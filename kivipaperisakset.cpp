#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	string nimi;
	cout << "Kirjoita nimesi: ";
	cin >> nimi;
	system("cls");
	int kierrokset;
	cout << "kuinka monta kierrosta halua pelata?: ";
	cin >> kierrokset;

	int pelaajan_pisteet = 0, tietokoneen_pisteet = 0;
	for (int kierros = 1; kierros <= kierrokset; kierros++)
	{
		system("cls");
		int pelaajan_valinta, tietokoneen_valinta;
		cout << "Kierros: " << kierros << "/" << kierrokset << endl; 
		cout << nimi << "n pisteet: " << pelaajan_pisteet << endl;
		cout << "Tietokoneen pisteet: " << tietokoneen_pisteet << endl;

		cout << "1. Kivi\n2. Paperi\n3. Sakset" << endl;
		cin >> pelaajan_valinta;

		/* arpoo tietokoneelle valinnan */
		srand(time(0));
		tietokoneen_valinta = (rand() % 3) + 1;

		if (pelaajan_valinta == 1 && tietokoneen_valinta == 3)
		{
			cout << nimi << " Voitti!" << endl;
			pelaajan_pisteet++;
		}
		else if (pelaajan_valinta == 2 && tietokoneen_valinta == 1)
		{
			cout << nimi << " Voitti!" << endl;
			pelaajan_pisteet++;
		}
		else if (pelaajan_valinta == 3 && tietokoneen_valinta == 2)
		{
			cout << nimi << " Voitti!" << endl;
			pelaajan_pisteet++;
		}
		else if (pelaajan_valinta == tietokoneen_valinta)
		{
			cout << "tasapeli!" << endl;
		}
		else
		{
			cout << "Tietokone Voitti!" << endl;
			tietokoneen_pisteet++;
		}
		cout << "Paina jotakin nappia" << endl;
		_getwch();
	}
	system("cls");
	cout << nimi << "n pisteet: " << pelaajan_pisteet << endl;
	cout << "Tietokoneen pisteet: " << tietokoneen_pisteet << endl;

	if (pelaajan_pisteet == tietokoneen_pisteet)
	{
		cout << "Peli Paattyi Tasapeliin!" << endl;
	}
	else if (pelaajan_pisteet > tietokoneen_pisteet)
	{
		cout << nimi << " Voitti Pelin!" << endl;
	}
	else
	{
		cout << "Tietokone Voitti Pelin" << endl;
	}

	return 0;
}