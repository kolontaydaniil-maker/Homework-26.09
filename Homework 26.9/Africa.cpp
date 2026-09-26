#include "Africa.h"
#include "Wildebeest.h"
#include "Lion.h"

void Africa::CreateAnimals()
{
    Wildebeest wildebeest(50);
    Lion lion(60);

    wildebeest.EatGrass();
    lion.Eat(&wildebeest);
}