// Demo-FonctionnelleLambda.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <functional>

int Add(int InA, int InB) {

    return InA + InB;

}

int Sub(int InA, int InB) {

    return InA - InB;

}


int main()
{
    std::cout << Add(5,6) << std::endl;

    std::function<int(int, int)> funcOperator = Add;
    std::cout << funcOperator(5, 6) << std::endl;
    funcOperator = Sub;
    std::cout << funcOperator(5, 4) << std::endl;

    funcOperator = [](int InA, int InB) {return InA * InB; };
    std::cout << funcOperator(5, 4) << std::endl;

    std::function<int(int, int)> funcSecondOperator = [](int InA, int InB) {return InA / InB; };
   
    const int offset = 5;
    // [] est nommée ;a capture
    funcOperator = [offset](int InA, int InB) {return InA + InB + offset; };


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
