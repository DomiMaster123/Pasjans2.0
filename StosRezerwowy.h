#pragma once
#include <vector>
#include <iostream>
#include "Karta.h"
class StosRezerwowy
{
private:
	std::vector<Karta> stosRezerwowy;
public:
	StosRezerwowy(std::vector<Karta> talia);
	Karta pobierzKarteZeStosu();
	Karta przejrzyjKarte();

	//pobierania karty ze stosu rezerwowego
	//przegl¹danie kart na stosie rezerwowym

};

