#pragma once

#include "Herbivore.h"

class Wildebeest : public Herbivore
{
public:
    Wildebeest(int weight);

    void EatGrass() override;
};