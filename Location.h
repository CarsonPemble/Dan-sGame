#ifndef LOCATION_H
#define LOCATION_H

#include "Item.h"

class Location
{
private:
    char face;
    Item* drop;
    bool isLocked;
    bool isWall;

public:
    Location();
    Location(char type);
    Location(char type, bool locked);
    Location(char type, Item* item);
    void addDrop(Item* item);
    void deleteItem();
    Item* getItem();
    char print();
};

#endif // LOCATION_H
