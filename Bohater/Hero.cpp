#include "stdafx.h"
#include "Hero.h"


Hero::Hero()
{
}

Hero::Hero(string n)
{
	name = n;

	srand(time(NULL));

	stamina = rand() % 500 + 1500;
	

	dexterity = rand() % 50;
	

	power = rand() % 10 + 100;
	
}

Hero::Hero(const Hero & hero)
{
	plik.open("Imiona.txt", ios::in);

	if (plik.good() == false)
	{
		cout << "Nie udalo sie otworzy pliku !!" << endl;
		exit(0);
	}

	nr_linii = rand() % 7 + 1;
	

	for (int i = 1; i <= nr_linii - 1; i++)
	{
		getline(plik, imie);
	
	}
	getline(plik, imie);
	

	name = imie;
	stamina = hero.stamina;
	dexterity = hero.dexterity;
	power = hero.power;
	
}


Hero::~Hero()
{
}

void Hero::Wyswietl_zawodnika() const
{
	cout << "Nasz bohater nazywa sie: " << name << endl
		<< "Wytrzymalosc: " << stamina << endl
		<< "Zrecznosc: " << dexterity << endl
		<< "Sila: " << power << endl << endl;
}
