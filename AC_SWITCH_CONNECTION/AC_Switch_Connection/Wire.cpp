#include "Wire.h"
#include "AC.h"
#include<iostream>

Wire::Wire(string colour, string brand)
{
    cout<< "Wire constructor"<<endl;
    m_colour = colour;
    m_brand = brand;
}

void Wire::setAC(AC* A1)
{
    m_AC = A1;
}

Wire::~Wire()
{
    cout<< "Wire Destructor"<<endl;
}

void  Wire::turnOnWire()
{
    m_isWireOn = true;
    cout << "Current is flowing within "<<m_brand<<" wire"<<endl;
    m_AC->turnOnAC();
}
void Wire::turnOffWire()
{
    m_isWireOn = false;
    cout << "Current is not flowing within "<<m_brand<<" wire"<<endl;
    m_AC->turnOffAC();
}

void Wire::displayWireDetails()
{
    if(m_isWireOn)
    {
        cout << "Current is flowing within "<<m_brand<<" wire"<<endl;
    }
    else
    {
        cout << "Current is not flowing within "<<m_brand<<" wire"<<endl;
    }
}


