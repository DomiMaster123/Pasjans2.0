#include <iostream>
#include "Talia.h"

int main()
{
    Talia talia;
    Talia& mojaTalia = talia;   // referencja do tej samej talii

    std::cout << "Rozdano pierwsz� kart�: "
        << mojaTalia.rozdajKarte().toString() << '\n';

    return 0;
}
