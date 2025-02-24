#include "Havels_wire.h"
#include"AC.h"
#include <iostream>

Havels_wire::Havels_wire(string colour, string brand):Wire(colour,brand)
{
    cout<<"Havels constructor"<<endl<<endl;
}

void Havels_wire::turnOnWire()
{
    cout<<"Havels Wire is ON"<<endl;
    m_AC->turnOnAC();
}

void Havels_wire::turnOffWire()
{
    cout<<"Havels Wire is OFF"<<endl;
    m_AC->turnOffAC();
}

Havels_wire::~Havels_wire()
{
    cout<<"Havels Destructor"<<endl;
}
