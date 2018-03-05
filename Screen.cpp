#include "Screen.h"

Screen::Screen() : Map()
{
    player = nullptr;
}

Screen::Screen(string newMap) : Map(newMap)
{

}

Screen::Screen(Character* newPlayer) : Map()
{
    player = newPlayer;
}

bool Screen::withinBounds(){
    if(player->getX() < 0 || player->getY() < 0)
        return false;

    else if(player->getX() >= width || player->getY() >= height)
        return false;

    else
        return true;

}

void Screen::addItem(Item* newItem, int itemX, int itemY){
    locations[itemX][itemY].addDrop(newItem);
}

void Screen::addExit(string exitName, int x, int y){
    locations[x][y].addExit(exitName);
}

void Screen::print(){

    system("clear");

    string* out = new string[height];
    *out = {};

    for(int i = 0; i < Map::height; i++){
        for(int j = 0; j < Map::width; j++){

            if(player != nullptr && i == player->getY() && j == player->getX())
                out[i] += '@';

            else
                out[i] += static_cast<char>(locations[j][i].print());
        }
        cout << out[i] << endl;
    }
    cout << endl;
}


void Screen::update(){
    Location newloc = locations[player->getX()][player->getY()];

    if(newloc.getItem() != nullptr){
        player->acquire(newloc.getItem());
        locations[player->getX()][player->getY()].deleteItem();
    }

    else if(newloc.wall())
        player->moveBack();

}
