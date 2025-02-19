#include "Wire.h"
#include "AC.h"
#include<iostream>

Wire::Wire(float length, float thickness, float price, string colour, string brand)
{
    cout<< "Wire constructor"<<endl;
    m_length = length;
    m_thickness = thickness;
    m_price = price;
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
    displayWireDetails();
    m_AC->turnOnAC();
}
void Wire::turnOffWire()
{
    m_isWireOn = false;
    displayWireDetails();
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


