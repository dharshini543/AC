#include "Polycab_wire.h"
#include"AC.h"
#include <iostream>

Polycab_wire::Polycab_wire(string colour, string brand):Wire(colour, brand)
{
    cout<<"Polycab constructor"<<endl<<endl;
}

void Polycab_wire::turnOnWire()
{
    cout<<"Polycab Wire is ON"<<endl;
    m_AC->turnOnAC();
}

void Polycab_wire::turnOffWire()
{
    cout<<"Polycab Wire is OFF"<<endl;
    m_AC->turnOffAC();
}

Polycab_wire::~Polycab_wire()
{
    cout<<"Polycab Destructor"<<endl;
}
