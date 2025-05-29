#pragma once
#include "StosKoncowy.h"
#include "Talia.h"
#include "Kolumna.h"
#include "StosRezerwowy.h"
#include <iostream>
#include <vector>
class Rozgrywka
{

public:
	Talia talia;
	std::vector<Kolumna> kolumny;
	Rozgrywka()
	{

		for (int i = 1; i < 8; i++) {
			Rozgrywka::kolumny.push_back(Kolumna(i, talia));
		}


		StosKoncowy stosKoncowy1, stosKoncowy2, stosKoncowy3, stosKoncowy4;





		StosRezerwowy stosRezerwowy(talia);
	};
	
	void zKolumnyDoKolumny(int numerKolumnyZrodlowej, int numerKolumnyDocelowej, int iloscKartZabieranych){
		
	}
	void ZeStosuDoKolumny(int numerKolumnyZrodlowej)
	{

	};
	void zKolumnyNaStos(int numerKolumnyZrodlowej, std::string nazwaStosu) {

	};



	
	//tworzenie talii, kolumn, stosow koncowych, stosu rezerwowego
	
	/*Pêtla:
	1.czytamy komendy gracza
	2.tlumaczymy je na ruch
	3.wykonywanie ruchu na komendach */

};

