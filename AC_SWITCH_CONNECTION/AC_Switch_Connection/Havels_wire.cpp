#include "Havels_wire.h"
#include <iostream>

Havels_wire::Havels_wire(float length, float thickness, float price, string colour, string brand):Wire(length,thickness,price,colour,brand)
{
    cout<<"Havels constructor"<<endl;
}

Havels_wire::~Havels_wire()
{
    cout<<"Havels Destructor"<<endl;
}
