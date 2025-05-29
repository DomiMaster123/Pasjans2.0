#include "StosRezerwowy.h"  
#include "Karta.h"  
#include <algorithm>  
#include <random>  

StosRezerwowy::StosRezerwowy(Talia & talia)  
{  
    stosRezerwowy = talia.wezTalie();  
}  

void StosRezerwowy::tasujStos()  
{  
    std::random_device rd;  
    std::mt19937 g(rd());  
    std::shuffle(przejrzaneKarty.begin(), przejrzaneKarty.end(), g);  
}  

Karta StosRezerwowy::pobierzKarteZeStosu()  
{  
    if (!stosRezerwowy.empty()) {  
        Karta pobieranaZeStosu = stosRezerwowy.front();  
        stosRezerwowy.erase(stosRezerwowy.begin());  
        return pobieranaZeStosu;  
        Karta kartaNaGorze = stosRezerwowy.front();
        kartaNaGorze.odkryj();
    }  
    else {  
        std::cout << "Stos jest pusty!" << std::endl;  
        return Karta(Karta::Kolor::Kier, Karta::Wartosc::As); // Zwracanie domyœlnej karty w przypadku pustego stosu  
    }  
}  

Karta StosRezerwowy::przejrzyjKarte()  
{  
    if (!stosRezerwowy.empty()) {  
        Karta przegladanaKarta = stosRezerwowy.front();  
        przegladanaKarta.odkryj();  
        Karta ostatniaKarta = stosRezerwowy.back();  
        if (!(przegladanaKarta.pobierzWartosc() == ostatniaKarta.pobierzWartosc() && przegladanaKarta.pobierzKolor() == ostatniaKarta.pobierzKolor())) {  
            stosRezerwowy.erase(stosRezerwowy.begin());  
            przejrzaneKarty.push_back(przegladanaKarta);  
            return przegladanaKarta;  
        }  
        else {  
            std::cout << "Stos jest pusty!" << std::endl;  
        }  
        if (!przejrzaneKarty.empty()) {  
            stosRezerwowy.erase(stosRezerwowy.begin());  
            przejrzaneKarty.push_back(przegladanaKarta);  
            tasujStos();  
            stosRezerwowy = przejrzaneKarty;  
            przejrzaneKarty.clear();  
        }  
        else {  
            std::cout << "Stos jest pusty!" << std::endl;  
            return Karta(Karta::Kolor::Kier, Karta::Wartosc::As);  
        }  
    }  
    else {  
        std::cout << "Stos jest pusty!" << std::endl;  
        return Karta(Karta::Kolor::Kier, Karta::Wartosc::As); // Zwracanie domyœlnej karty w przypadku pustego stosu  
    }  
}
