#include "food.h"

Food::Food()
{

}
Food::Food(string name) : Consumables(name)
{

}

string Food::howToPrepare(){

//test
    return "cook it";
}
