#include "Rozgrywka.h"  
#include "StosRezerwowy.h"  
#include <map>  
#include <string>  
#include <vector>  
using namespace std;

Rozgrywka::Rozgrywka()
{

	for (int i = 1; i < 8; i++) {
		Rozgrywka::kolumny.push_back(Kolumna(8, talia));
	}


	StosKoncowy stosKoncowy1, stosKoncowy2, stosKoncowy3, stosKoncowy4;


	 


	StosRezerwowy(talia);
}

void Rozgrywka::zKolumnyDoKolumny(int numerKolumnyZrodlowej, int numerKolumnyDocelowej, int iloscKartZabieranych)
{
	Kolumna kolumnaZrodlowa = Rozgrywka::kolumny[numerKolumnyZrodlowej - 1];
	Kolumna kolumnaDocelowa = kolumny[numerKolumnyDocelowej - 1];
	if (iloscKartZabieranych > kolumnaZrodlowa.rozmiar()) {
		cout << "Nie mozna zabrac kart" << endl;
	}
	else if (kolumnaZrodlowa.czyPusta()) {

		cout << "Nie mozna zabrac kart" << endl;
	}
	else if (kolumnaZrodlowa.czyMoznaZabrac() && kolumnaDocelowa.czyMoznaDodac())
}

void Rozgrywka::ZeStosuDoKolumny(int numerKolumnyZrodlowej)
{
}

void Rozgrywka::zKolumnyNaStos(int numerKolumnyZrodlowej, std::string nazwaStosu)
{
}
