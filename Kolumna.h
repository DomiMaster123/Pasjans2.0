#pragma once
#include <vector>
#include "Karta.h"

class Kolumna
{
public:
    explicit Kolumna(int liczbaZakrytych = 0);       // ile kart startowo zakrytych

    bool  czyMoznaDodac(const Karta& nowa,
        const Karta& naStosie) const; // klasyczne zasady pasjansa
    void  dodajKarte(const Karta& nowa);
    void  usunKartyOdIndexu(int index);
    bool  czyMoznaZabrac(const Karta& zabierana) const;

private:
    std::vector<Karta> karty;
};

