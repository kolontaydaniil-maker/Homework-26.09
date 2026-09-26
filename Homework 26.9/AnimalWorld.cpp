#include "AnimalWorld.h"

AnimalWorld::AnimalWorld(Continent* continent)
{
    this->continent = continent;
}

void AnimalWorld::MealsHerbivores()
{
    continent->CreateAnimals();
}

void AnimalWorld::NutritionCarnivores()
{
    continent->CreateAnimals();
}