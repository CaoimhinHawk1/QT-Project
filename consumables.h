#ifndef CONSUMABLES_H
#define CONSUMABLES_H

#include <string>
using namespace std;


class Consumables
{
public:
    Consumables();
    Consumables(string name);
    virtual string howToPrepare() = 0;
protected:
    string name;
};

#endif // CONSUMABLES_H
