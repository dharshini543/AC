#include"Polycab_wire.h"
#include "AC.h"
#include<iostream>

Polycab_Wire::Polycab_Wire()
{
    cout<< "Polycab Wire constructor"<<endl<<endl;
}

Polycab_Wire::Polycab_Wire(string colour, string brand)
{
    cout<< "Polycab Wire constructor"<<endl;
    m_colour = colour;
    m_brand = brand;
}

void Polycab_Wire::setAC(AC* A1)
{
    m_AC = A1;
}

Polycab_Wire::~Polycab_Wire()
{
    cout<< "Polycab Wire Destructor"<<endl;
}

void  Polycab_Wire::turnOnWire()
{
    cout << "polycab wire is ON"<<endl;
    m_AC->turnOnAC();
}
void Polycab_Wire::turnOffWire()
{
    cout << "polycab wire is OFF"<<endl;
    m_AC->turnOffAC();
}



