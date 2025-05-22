#include <iostream>
#include "Talia.h"
#include "Karta.h"
#include "Kolumna.h"
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Talia talia;
    Talia& mojaTalia = talia;   // referencja do tej samej talii

    std::cout << "Rozdano pierwsza karte: "
        << mojaTalia.rozdajKarte().toString() << '\n';

    return 0;
}
