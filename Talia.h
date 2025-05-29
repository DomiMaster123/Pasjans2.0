#pragma once
#include <vector>
#include <algorithm>
#include <random>
#include "Karta.h"

class Talia
{
public:
    Talia();                 // tworzy i tasuje talie

    Karta rozdajKarte();     // zwraca kartę z góry talii
    void  tasuj();  
    std::vector<Karta> wezTalie()const { return talia; }

private:
    std::vector<Karta> talia;

    void stworzKarty();      // 52 karty w standardowej talii
};


