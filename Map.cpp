#include "Map.h"

Map::Map(){
    ifstream inFile("NewMap.txt");

    if(!inFile.is_open()){
        cout << "Error opening file";
        exit(0);
    }

    inFile >> width;
    inFile >> height;

    char in;

    locations.resize(height);
    for(int i = 0; i < height; i++){
        locations[i].resize(width);
    }

    for(int i = 0; i < width; i++){
        for(int j = 0; j < height; j++){
            inFile >> in;
            locations[i][j] = Location(in);
        }
    }

    if(!inFile.good()){
        cout << "Error reading file";
        exit(0);
    }
}

Map::Map(string mapName){
    ifstream inFile(mapName);

    if(!inFile.is_open()){
        cout << "Error opening file";
        exit(0);
    }

    inFile >> width >> height;

    char in;

    locations.resize(height);
    for(int i = 0; i < height; i++){
        locations[i].resize(width);
    }

    for(int i = 0; i < width; i++){
        for(int j = 0; j < height; j++){
            inFile >> in;
            locations[i][j] = Location(in);
        }
    }

    if(!inFile.good()){
        cout << "Error reading file";
        exit(0);
    }
}

Map::~Map(){

}

