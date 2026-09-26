#include "Bison.h"
#include <iostream>

using namespace std;

Bison::Bison(int weight) : Herbivore(weight)
{
}

void Bison::EatGrass()
{
    weight += 10;

    cout << "Bison eats grass. Weight: "
        << weight << endl;
}