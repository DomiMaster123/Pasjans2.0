#pragma once
#include <vector>
#include "Karta.h"

class Talia
{
public:
    Talia();                 // tworzy i tasuje talie

    Karta rozdajKarte();     // zwraca�kart� z�g�ry talii
    void  tasuj();           // ponowne tasowanie (Fisher?Yates)

private:
    std::vector<Karta> talia;

    void stworzKarty();      // 52�karty w�standardowej talii
};


