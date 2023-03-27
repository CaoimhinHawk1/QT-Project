#ifndef INGREDIENT_H
#define INGREDIENT_H
#include "consumables.h"
#include <string>

using namespace std;


class Ingredient : public Consumables
{
public:
    Ingredient();
    virtual string howToPrepare();
};

#endif // INGREDIENT_H
