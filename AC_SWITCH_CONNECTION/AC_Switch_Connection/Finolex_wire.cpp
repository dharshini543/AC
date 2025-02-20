#include "Finolex_wire.h"
#include"AC.h"
#include <iostream>

Finolex_wire::Finolex_wire(string colour, string brand):Wire(colour,brand)
{
    cout<<"Finolex constructor"<<endl<<endl;
}

void Finolex_wire::turnOnWire()
{
    cout<<"Finolex wire is ON"<<endl;
    m_AC->turnOnAC();

}

void Finolex_wire::turnOffWire()
{
    cout<<"Finolex wire is OFF"<<endl;
    m_AC->turnOffAC();
}

Finolex_wire::~Finolex_wire()
{
    cout<<"Finolex Destructor"<<endl;
}
