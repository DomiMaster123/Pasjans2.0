#include <iostream>
#include "Talia.h"
#include "Karta.h"
#include "Kolumna.h"
#include "Rozgrywka.h"
#include "StosKoncowy.h"
#include "StosRezerwowy.h"
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Talia talia;
    
    Karta karta(Karta::Kolor::Kier, Karta::Wartosc::Dziesiec);
    Karta karta2(Karta::Kolor::Pik, Karta::Wartosc::Dziewiec);
    Karta karta3(Karta::Kolor::Karo, Karta::Wartosc::Jopek);
    Karta karta4(Karta::Kolor::Karo, Karta::Wartosc::As);
    karta4.odkryj();
    vector<Karta> kolumna1;
    kolumna1.push_back(karta);
    kolumna1.push_back(karta2);
    kolumna1.push_back(karta3);

    Kolumna kolumna(kolumna1);
    kolumna.dodajKarte(karta4);
    

    
    cout << kolumna.KolumnaToString() << endl;
    
    

    
    
}
