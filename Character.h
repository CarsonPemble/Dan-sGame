#ifndef CHARACTER_H
#define CHARACTER_H

#include "Item.h"

enum Direction{
    NORTH, EAST, SOUTH, WEST
};

class Character
{
private:
    int InvSize = 10;
    vector<Item*> Inventory;
    int xPos;
    int yPos;
    int HP;
    string name;
public:
    Character(int x, int y, string Name, int health);
    int getX() const;
    int getY() const;
    bool acquire(Item* item);
    void print() const;
    void move(char in);
    int command(string input);
    void movex();
    void moveY();
};

#endif // CHARACTER_H
