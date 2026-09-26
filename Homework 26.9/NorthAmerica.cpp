#include "NorthAmerica.h"
#include "Bison.h"
#include "Wolf.h"

void NorthAmerica::CreateAnimals()
{
    Bison bison(100);
    Wolf wolf(120);

    bison.EatGrass();
    wolf.Eat(&bison);
}