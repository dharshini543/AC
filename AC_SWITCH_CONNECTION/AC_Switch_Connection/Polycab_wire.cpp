#include "Polycab_wire.h"
#include <iostream>

Polycab_wire::Polycab_wire(float length, float thickness, float price, string colour, string brand):Wire(length, thickness, price, colour, brand)
{
    cout<<"Polycab constructor"<<endl;
}

Polycab_wire::~Polycab_wire()
{
    cout<<"Polycab Destructor"<<endl;
}
