#pragma once
#include "StosRezerwowy.h"
#include "StosKoncowy.h"
#include "Talia.h"
#include "Kolumna.h"
#include <map>
class Rozgrywka
{

public:
	Rozgrywka();
	Talia talia;
	map<Karta::Kolor, StosKoncowy> stosyKoncowe;
	vector<Kolumna> kolumny;
	void zKolumnyDoKolumny(int numerKolumnyZrodlowej, int numerKolumnyDocelowej, int iloscKartZabieranych);
	void ZeStosuDoKolumny(int numerKolumnyZrodlowej);
	void zKolumnyNaStos(int numerKolumnyZrodlowej, std::string nazwaStosu);



	
	//tworzenie talii, kolumn, stosow koncowych, stosu rezerwowego
	
	/*Pêtla:
	1.czytamy komendy gracza
	2.tlumaczymy je na ruch
	3.wykonywanie ruchu na komendach */

};

