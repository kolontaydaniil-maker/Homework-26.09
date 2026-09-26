#include "Wolf.h"
#include <iostream>

using namespace std;

Wolf::Wolf(int power) : Carnivore(power)
{
}

void Wolf::Eat(Herbivore* herbivore)
{
    if (power > herbivore->GetWeight())
    {
        power += 10;

        cout << "Wolf eats bison. Power: "
            << power << endl;
    }
    else
    {
        power -= 10;

        cout << "Wolf could not eat bison. Power: "
            << power << endl;
    }
}