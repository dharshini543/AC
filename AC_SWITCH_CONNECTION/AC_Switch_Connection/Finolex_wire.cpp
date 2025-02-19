#include "Finolex_wire.h"
#include <iostream>

Finolex_wire::Finolex_wire(float length, float thickness, float price, string colour, string brand):Wire(length,thickness,price,colour,brand)
{
    cout<<"Finolex constructor"<<endl;
}

Finolex_wire::~Finolex_wire()
{
    cout<<"Finolex Destructor"<<endl;
}
