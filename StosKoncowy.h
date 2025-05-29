#pragma once
#include "Karta.h"
#include <vector>
#include <iostream>
class StosKoncowy
{
private:
	std::vector<Karta> stosKoncowy;
	Karta::Kolor kolor;
public:
	StosKoncowy();

	/* funkcja DodajKarte:
	1.sprawdzamy czy ta karta znajduje sie w kolumnach lub na stosie rezerwowym
	2.sprawdzamy czy kolejnosc sie zgadza*/
	void polozKarte(Karta kladzionaKarta);
};

