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
    string exit;

public:
    Location();
    Location(char type);
    Location(char type, bool locked);
    Location(char type, Item* item);
    Location(char type, bool locked, bool wall);
    void addDrop(Item* item);
    void addExit(string exitName);
    void deleteItem();
    bool wall(){ return isWall; };
    bool locked(){ return isLocked; };
    Item* getItem();
    char print();
};

#endif // LOCATION_H
