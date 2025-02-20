#include"Havels_wire.h"
#include "AC.h"
#include<iostream>

Havels_Wire::Havels_Wire()
{
    cout<< "Havels Wire constructor"<<endl<<endl;
}

Havels_Wire::Havels_Wire(string colour, string brand)
{
    cout<< "Havels Wire constructor"<<endl;
    m_colour = colour;
    m_brand = brand;
}

void Havels_Wire::setAC(AC* A1)
{
    m_AC = A1;
}

void  Havels_Wire::turnOnWire()
{
    cout << "Havels wire is ON"<<endl;
    m_AC->turnOnAC();
}
void Havels_Wire::turnOffWire()
{
    cout << "Havels wire is OFF"<<endl;
    m_AC->turnOffAC();
}
Havels_Wire::~Havels_Wire()
{
    cout<< "Havels Wire Destructor"<<endl;
}



