#include <iostream>

#include "Africa.h"
#include "NorthAmerica.h"
#include "AnimalWorld.h"

using namespace std;

int main()
{
    Africa africa;
    NorthAmerica northAmerica;

    AnimalWorld world1(&africa);
    AnimalWorld world2(&northAmerica);

    cout << "Africa:" << endl;
    world1.MealsHerbivores();
    world1.NutritionCarnivores();

    cout << "North America:" << endl;
    world2.MealsHerbivores();
    world2.NutritionCarnivores();

    return 0;
}