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


		StosKoncowy stosKoncowy1(Karta::Kolor::Kier), stosKoncowy2(Karta::Kolor::Karo), stosKoncowy3(Karta::Kolor), stosKoncowy4;





		StosRezerwowy stosRezerwowy(talia);
	};
	
	void zKolumnyDoKolumny(int numerKolumnyZrodlowej, int numerKolumnyDocelowej, int index){
		if (numerKolumnyZrodlowej <= 7 && numerKolumnyDocelowej <= 7) {
			if(index < kolumny[numerKolumnyZrodlowej - 1].WezKolumne().size())
		}
	}
	void ZeStosuDoKolumny(int numerKolumnyZrodlowej)
	{

	};
	void zKolumnyNaStos(int numerKolumnyZrodlowej, std::string nazwaStosu) {

	};



	
	//tworzenie talii, kolumn, stosow koncowych, stosu rezerwowego
	
	/*P�tla:
	1.czytamy komendy gracza
	2.tlumaczymy je na ruch
	3.wykonywanie ruchu na komendach */

};

