#include "Location.h"

Location::Location(){
    face = 0;
    isWall = false;
    isLocked = false;
    drop = nullptr;
}

Location::Location(char type){
    face = type;

    if(type == '#'){
        isWall = true;
    }
    else
        isWall = false;

    isLocked = false;
    drop = nullptr;
    exit = "";
}

Location::Location(char type, bool locked){
    face = type;
    isLocked = locked;
    drop = nullptr;
    isWall = false;
    exit = "";
}

Location::Location(char type, bool locked, bool wall){
    face = type;
    isLocked = locked;
    drop = nullptr;
    isWall = wall;
    exit = "";
}

Location::Location(char type, Item* item){
    face = type;
    drop = item;
    isWall = false;
    isLocked = false;
    exit = "";
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

void Location::addExit(string exitName){
    exit = exitName;
}
