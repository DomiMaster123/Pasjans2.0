#include "Kolumna.h"


Kolumna::Kolumna()
{
}

Kolumna::Kolumna(int numerKolumny, Talia& talia)
{
    for (int i = 0; i < numerKolumny; i++)
    {
        Karta rozkladana = talia.rozdajKarte();
        karty.push_back(rozkladana);
         karty[karty.size()-1].odkryj();
        
    }
    
    
}

bool Kolumna::czyMoznaDodac(const Karta& nowa,
    const Karta& naStosie) const
{
    if (karty.empty()) {
        if (nowa.pobierzWartosc() == Karta::Wartosc::Krol)
        {
            return true;
        }
        else {
            return false;
        }
    }
    else
    {
        bool roznyKolor = Karta::czyCzerwony(nowa.pobierzKolor()) !=
            Karta::czyCzerwony(naStosie.pobierzKolor());
        bool mniejszaOJeden = static_cast<int>(nowa.pobierzWartosc()) + 1 ==
            static_cast<int>(naStosie.pobierzWartosc());
        if (roznyKolor && mniejszaOJeden) {
            return true;
        }
        else {
            return false;
        }
    }

    
}

void Kolumna::dodajKarte(const Karta& nowa)
{
    if (karty.empty() || czyMoznaDodac(nowa, karty.back()))
        karty.push_back(nowa);
}

void Kolumna::usunKartyOdIndexu(int index)
{
    if (index >= 0 && index < static_cast<int>(karty.size()))
    {
        karty.erase(karty.begin() + index, karty.end());
        if (!karty.empty())
            const_cast<Karta&>(karty.back()).odkryj();
    }
}

bool Kolumna::czyMoznaZabrac(int index) const
{
    
    return true;
}
int Kolumna::rozmiar() const {
    return karty.size();

}

bool Kolumna::czyPusta() const
{
    if (karty.empty())
    {
        return true;
    }
    else {
        return false;
    }
}
std::vector<Karta> Kolumna::WezKolumne()
{
    return karty;
}

std::string Kolumna::KolumnaToString()
{
    std::string CalaKolumna;
    for (int i = 0; i < karty.size(); i++)
    {
        CalaKolumna = CalaKolumna + " " + karty[i].toString();
    }
    return CalaKolumna;
}

