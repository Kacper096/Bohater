// Bohater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Hero.h"

int main()
{
	Hero adept("Zenek");
	Hero drugi_zaw(adept);

	adept.Wyswietl_zawodnika();
	drugi_zaw.Wyswietl_zawodnika();

    return 0;
}

