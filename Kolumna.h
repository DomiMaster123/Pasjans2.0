#pragma once
#include <vector>
#include "Karta.h"
#include "Talia.h"

class Kolumna
{
public:
    Kolumna(int numerKolumny, Talia& talia);      

    bool  czyMoznaDodac(const Karta& nowa,
        const Karta& naStosie) const; // klasyczne zasady pasjansa
    void  dodajKarte(const Karta& nowa);
    void  usunKartyOdIndexu(int index);
    bool  czyMoznaZabrac(const Karta& zabierana) const;

private:
    std::vector<Karta> karty;
};

