#pragma once

class Herbivore
{
protected:
    int weight;
    bool life;

public:
    Herbivore(int weight);
    virtual void EatGrass() = 0;

    int GetWeight();
    bool GetLife();

    virtual ~Herbivore();
};