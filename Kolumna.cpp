#include "Kolumna.h"
#include <algorithm>

Kolumna::Kolumna(int liczbaZakrytych)
{
    // konstruktor zostawiam pusty � logika zale�y od sposobu rozk�adania kart
    // mo�esz wczyta� odpowiedni� liczb� kart z�Talii i zakry� je, je�li chcesz
}

bool Kolumna::czyMoznaDodac(const Karta& nowa,
    const Karta& naStosie) const
{
    bool roznyKolor = Karta::czyCzerwony(nowa.pobierzKolor()) !=
        Karta::czyCzerwony(naStosie.pobierzKolor());
    bool mniejszaOJed = static_cast<int>(nowa.pobierzWartosc()) + 1 ==
        static_cast<int>(naStosie.pobierzWartosc());

    return roznyKolor && mniejszaOJed;
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
    // UWAGA: �eby to dzia�a�o, musia�by� przeci��y� operator== w�Karta
}

