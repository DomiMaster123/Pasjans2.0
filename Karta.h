#pragma once
#include <string>

class Karta
{
public:
    // kolory kart
    enum Kolor { Kier = 1, Karo, Pik, Trefl };
    // wartoœci kart
    enum Wartosc {
        As = 1, Dwa, Trzy, Cztery, Piec, Szesc,
        Siedem, Osiem, Dziewiec, Dziesiec, Jopek, Dama, Krol
    };

    Karta(Kolor k, Wartosc w, bool z = true);

    Kolor  pobierzKolor()   const;
    Wartosc pobierzWartosc() const;
    bool   czyZakryta()     const;
    static bool czyCzerwony(Kolor kolor);

    void odkryj();
    void zakryj();
    std::string toString() const;

    bool operator==(const Karta& inna) const;

private:
    Kolor   kolor;
    Wartosc wartosc;
    bool    zakryta = true;
};
