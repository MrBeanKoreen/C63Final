#include <iostream>
#include "Patate.h"

//on evite une erreur de compilationn grâce au #pragma once

using namespace std;

// # include ca copie colle entier d'un fichier
// en pratique sert a importer la declaration de symbole

int main()
{
    Patate p;
    #include"NeFaisPasCa.h"
    std::cout << "Hello World!\n";
    std::cout << "PI: " << PI << endl;
    std::cout << "Circonference de 4.0f: " << FORMULE_CIRCONFERENCE(4, 0f) << endl;

    std::cout << "Fichier: " __FILE__ << " Ligne: " << __LINE__ << endl;

#undef GAME_RELEASE


#ifdef GAME_RELEASE
    std::cout << "game release" << endl;
#else
    std::cout << "game debug" << endl;
#endif

#ifdef STEAM_VERSION
    std::cout << "N'est pas sur steam" << endl;
#endif
}
