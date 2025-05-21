#include "Karta.h"

Karta::Karta(Kolor k, Wartosc w, bool z)
    : kolor(k), wartosc(w), zakryta(z) {
}

Karta::Kolor  Karta::pobierzKolor()   const { return kolor; }
Karta::Wartosc Karta::pobierzWartosc() const { return wartosc; }
bool           Karta::czyZakryta()     const { return zakryta; }

bool Karta::czyCzerwony(Kolor kolor)
{
    return kolor == Kier || kolor == Karo;
}

void Karta::odkryj() { zakryta = false; }
void Karta::zakryj() { zakryta = true; }

std::string Karta::toString() const
{
    static const std::string nazwyWartosci[] =
    { "A","2","3","4","5","6","7","8","9","10","J","D","K" };
    static const std::string nazwyKolorow[] =
    { u8"\u2665",u8"\u2666",u8"\u2660",u8"\u2663" };

    return nazwyWartosci[wartosc - 1] + " " + nazwyKolorow[kolor - 1];
}

