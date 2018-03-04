#ifndef MAP_H
#define MAP_H

#include "Location.h"
#include <fstream>

class Map
{
protected:
    int width;
    int height;
    vector<vector<Location>> locations;

public:
    Map();
    Map(string mapName);
    ~Map();

};

#endif // MAP_H
