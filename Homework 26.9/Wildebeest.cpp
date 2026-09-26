#include "Wildebeest.h"
#include <iostream>

using namespace std;

Wildebeest::Wildebeest(int weight) : Herbivore(weight)
{
}

void Wildebeest::EatGrass()
{
    weight += 10;

    cout << "Wildebeest eats grass. Weight: "
        << weight << endl;
}