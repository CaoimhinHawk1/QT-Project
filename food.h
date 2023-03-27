#ifndef FOOD_H
#define FOOD_H
#include "consumables.h"
#include <string>
using namespace std;


class Food: public Consumables
{
public:
    virtual string howToPrepare();
    Food();
    Food(string name);
protected:
    vector<Ingredient>
};

#endif // FOOD_H
