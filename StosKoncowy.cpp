#include "StosKoncowy.h"

void StosKoncowy::polozKarte(Karta kladzionaKarta)
{
	if (stosKoncowy.empty()) {
		if (kladzionaKarta.pobierzWartosc() == 1) {
			stosKoncowy.push_back(kladzionaKarta);
		}
	}
	else {
		Karta ostatniaPolozona = stosKoncowy.front();
		ostatniaPolozona.toString();
		if (ostatniaPolozona.pobierzWartosc() < 13) {
			if (kladzionaKarta.pobierzWartosc() == ostatniaPolozona.pobierzWartosc() + 1) {
				stosKoncowy.insert(stosKoncowy.begin(),kladzionaKarta);
				kladzionaKarta.toString();
			}
		}
	}
}
