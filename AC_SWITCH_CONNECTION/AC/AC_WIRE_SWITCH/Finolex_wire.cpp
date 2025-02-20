#include"Finolex_wire.h"
#include "AC.h"
#include<iostream>

Finolex_Wire::Finolex_Wire()
{
    cout<< "Finolex Wire constructor"<<endl<<endl;
}

Finolex_Wire::Finolex_Wire(string colour, string brand)
{
    cout<< "Finolex Wire constructor"<<endl<<endl;
    m_colour = colour;
    m_brand = brand;
}

void Finolex_Wire::setAC(AC* A1)
{
    m_AC = A1;
}

void  Finolex_Wire::turnOnWire()
{
    cout << "Finolex wire is ON"<<endl;
    m_AC->turnOnAC();
}
void Finolex_Wire::turnOffWire()
{
    cout << "Finolex wire is OFF"<<endl;
    m_AC->turnOffAC();
}
Finolex_Wire::~Finolex_Wire()
{
    cout<< "Finolex Wire Destructor"<<endl;
}



