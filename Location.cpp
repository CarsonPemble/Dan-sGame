#include "Location.h"

Location::Location(){
    face = 0;
    isWall = false;
    isLocked = false;
    drop = nullptr;
}

Location::Location(char type){
    face = type;

    if(type == '&'){
        isWall = true;
    }

    isLocked = false;
    drop = nullptr;
}

Location::Location(char type, bool locked){
    face = type;
    isLocked = locked;
    drop = nullptr;
    isWall = false;
}

Location::Location(char type, Item* item){
    face = type;
    drop = item;
    isWall = false;
    isLocked = false;
}

Item* Location::getItem(){
    return drop;
}

char Location::print(){
    return face;
}

void Location::addDrop(Item* item){
    drop = item;
    face = '%';
}

void Location::deleteItem(){
    drop = nullptr;
    face = '*';
}
