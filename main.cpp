#include <iostream>
#include <curses.h>
#include "Character.h"
#include "Screen.h"

using namespace std;

int main()
{
    Item vase("Vase", 10);
    //    Item mace("Mace", 20);

    Character Link(0,0,"Link",20);

    Screen newScreen(&Link);
    newScreen.addItem(&vase,5,5);
    newScreen.print();

    string input;

    while(newScreen.withinBounds()){
        newScreen.update();
        getline(cin,input);
        int next = Link.command(input);

        while(next == 2){
            getline(cin,input);
            next = Link.command(input);
        }

        newScreen.print();
    }
    return 0;
}
