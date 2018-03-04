#include "Character.h"

Character::Character(int x, int y, string Name, int health){
    xPos = x;
    yPos = y;
    name = Name;
    HP = health;
}
int Character::getX() const{
    return xPos;
}
int Character::getY() const{
    return yPos;
}
bool Character::acquire(Item* item){
    if(Inventory.size() < 10){

        Inventory.insert(Inventory.end(),item);
        return true;
    }
    else
        return false;

}
void Character::print() const{
    system("clear");

    cout << name << endl
         << "Health: " << HP
         << " Inventory: "<< endl;
    cout << "-----------------------------------" << endl;
    for(int i = 0; i < Inventory.size(); i++) {
        if(Inventory.at(i) != nullptr) {
            cout << "[" << i << "] " << Inventory.at(i)->toString() << endl;
        }
    }
    cout << "-----------------------------------" << endl;

}

void Character::move(char in){

    if(in == 'w')
        yPos--;
    else if(in == 's')
        yPos++;
    else if(in == 'a')
        xPos--;
    else if(in == 'd')
        xPos++;

}

int Character::command(string input){
    if(input.length() == 1){
        move(input.at(0));
        return 1;
    }
    else if(input == "Inventory" || input == "inventory"){
        print();
        return 2;
    }
    else if(input == "exit" || input == "Exit"){
        return 1;
    }
    else{
        return 0;
    }
}
