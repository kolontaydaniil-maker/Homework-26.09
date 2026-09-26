#include "Herbivore.h"

Herbivore::Herbivore(int weight)
{
    this->weight = weight;
    life = true;
}

int Herbivore::GetWeight()
{
    return weight;
}

bool Herbivore::GetLife()
{
    return life;
}

Herbivore::~Herbivore()
{
}