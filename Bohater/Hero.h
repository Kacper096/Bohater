#pragma once
#include <string>
#include <time.h>
#include <fstream>
#include <iostream>

using namespace std;

class Hero
{
	//dane glowne do naszego programu
	string name;
	long stamina;
	int dexterity;
	long power;

	// dane do odczytu pliku
	int nr_linii = 1;
	string imie;

	fstream plik;

public:
	Hero();
	Hero(string n);
	Hero(const Hero& hero);
	~Hero();

	void Wyswietl_zawodnika()const;
};

