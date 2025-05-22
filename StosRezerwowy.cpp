#include "StosRezerwowy.h"
#include "Karta.h"


StosRezerwowy::StosRezerwowy(std::vector<Karta> talia):stosRezerwowy(talia)
{
}

Karta StosRezerwowy::pobierzKarteZeStosu()
{
	 
	 if (!stosRezerwowy.empty()) {
		 Karta pobieranaZeStosu = stosRezerwowy.front();
		 stosRezerwowy.erase(stosRezerwowy.begin());
		 return pobieranaZeStosu;
	 }
	 else {
		 std::cout << "Stos jest pusty!" << std::endl;
	 }

}
Karta StosRezerwowy::przejrzyjKarte() {
	if (!stosRezerwowy.empty()) {
		Karta przegladanaKarta = stosRezerwowy.front();
		stosRezerwowy.erase(stosRezerwowy.begin());
		stosRezerwowy.push_back(przegladanaKarta);
		return przegladanaKarta;
	}
	else {
		std::cout << "Stos jest pusty!" << std::endl;
	}
}
