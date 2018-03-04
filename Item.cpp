#include "Item.h"

Item::Item(string Name, int Value){
    name = Name;
    value = Value;
}

int Item::getValue() const{
    return value;
}

string Item::getName() const{
    return name;
}

string Item::toString() const{
    stringstream out;
    out << name
        << " value: "
        << value;

    return out.str();
}
