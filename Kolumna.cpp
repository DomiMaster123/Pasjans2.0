#include "Kolumna.h"
#include <algorithm>
#include "Talia.h"

Kolumna::Kolumna(int numerKolumny, Talia& talia)
{
    for (int i = 0; i < numerKolumny; i++)
    {
        Karta rozkladana = talia.rozdajKarte();
        karty.push_back(rozkladana);
    }
    Karta doOdkrycia = karty.front();
    doOdkrycia.odkryj();
}

bool Kolumna::czyMoznaDodac(const Karta& nowa,
    const Karta& naStosie) const
{
    bool roznyKolor = Karta::czyCzerwony(nowa.pobierzKolor()) !=
        Karta::czyCzerwony(naStosie.pobierzKolor());
    bool mniejszaOJeden = static_cast<int>(nowa.pobierzWartosc()) + 1 ==
        static_cast<int>(naStosie.pobierzWartosc());

    return roznyKolor && mniejszaOJeden;
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

bool Kolumna::czyMoznaZabrac(const Karta& zabierana) const
{
    return std::find(karty.begin(), karty.end(), zabierana) != karty.end();
    // UWAGA: ¿eby to dzia³a³o, musia³byœ przeci¹¿yæ operator== w Karta
}

