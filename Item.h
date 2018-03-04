#ifndef ITEM_H
#define ITEM_H

#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

class Item
{
private:
    string name;
    int value;

public:
    Item(string Name, int Value);
    int getValue() const;
    string getName() const;
    string toString() const;
};

#endif // ITEM_H
