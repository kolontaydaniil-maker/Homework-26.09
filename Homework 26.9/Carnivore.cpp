#include "Carnivore.h"

Carnivore::Carnivore(int power)
{
    this->power = power;
}

int Carnivore::GetPower()
{
    return power;
}

Carnivore::~Carnivore()
{
}