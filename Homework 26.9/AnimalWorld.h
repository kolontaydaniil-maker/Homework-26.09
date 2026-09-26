#pragma once

#include "Continent.h"

class AnimalWorld
{
private:
    Continent* continent;

public:
    AnimalWorld(Continent* continent);

    void MealsHerbivores();
    void NutritionCarnivores();
};