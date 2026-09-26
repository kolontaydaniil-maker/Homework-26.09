#include "Lion.h"
#include <iostream>

using namespace std;

Lion::Lion(int power) : Carnivore(power)
{
}

void Lion::Eat(Herbivore* herbivore)
{
    if (power > herbivore->GetWeight())
    {
        power += 10;

        cout << "Lion eats wildebeest. Power: "
            << power << endl;
    }
    else
    {
        power -= 10;

        cout << "Lion could not eat wildebeest. Power: "
            << power << endl;
    }
}