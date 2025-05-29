#pragma once
#include <vector>
#include <iostream>
#include "Karta.h"
#include "Talia.h"
class StosRezerwowy
{
private:
	std::vector<Karta> stosRezerwowy;
	std::vector<Karta> przejrzaneKarty;
public:
	StosRezerwowy();
	StosRezerwowy(Talia& talia);
	void tasujStos();
	Karta pobierzKarteZeStosu();
	Karta przejrzyjKarte();

	//pobierania karty ze stosu rezerwowego
	//przegl¹danie kart na stosie rezerwowym

};

