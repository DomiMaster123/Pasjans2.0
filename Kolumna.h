#pragma once 
#include <algorithm>
#include <iostream>
#include "Talia.h"

class Kolumna  
{  
public:  
    Kolumna();
    Kolumna(std::vector<Karta> kolumna);
    Kolumna(int numerKolumny, Talia & talia);      

    bool  czyMoznaDodac(const Karta & nowa, const Karta & naStosie) const; 
    void  dodajKarte(const Karta & nowa);  
    void  usunKartyOdIndexu(int index);  
    bool  czyMoznaZabrac(int index) const;  
    int   rozmiar() const;
    bool  czyPusta() const;
    std::string KolumnaToString();
    std::vector<Karta> WezKolumne();

private:  
    std::vector<Karta> karty;  
public:

   
};

