#include "Talia.h"


Talia::Talia()
{
    stworzKarty();
    tasuj();
}

void Talia::stworzKarty()
{
    for (int w = 1; w <= 13; ++w)
        for (int k = 1; k <= 4; ++k)
            talia.emplace_back(static_cast<Karta::Kolor>(k),
                static_cast<Karta::Wartosc>(w));
}

void Talia::tasuj()
{
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(talia.begin(), talia.end(), g);
}

Karta Talia::rozdajKarte()
{
    auto temp = talia.back();
    talia.pop_back();
    return temp;
}
