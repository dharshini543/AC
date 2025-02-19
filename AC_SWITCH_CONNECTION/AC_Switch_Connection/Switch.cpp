#include "Switch.h"
#include<iostream>

Switch::Switch(int switchNo, float length, float width, float price, string brand, string colour)
{
    cout<< "Switch constructor"<<endl;
    m_switchNo = switchNo;
    m_length = length;
    m_width = width;
    m_price = price;
    m_brand = brand;
    m_colour = colour;
}

void Switch::setWire(Wire* w)
{
    m_wire = w;
}

Switch::~Switch()
{
    cout<< "Switch Destructor"<<endl;
}

void Switch::turnOnSwitch()
{
    m_isSwitchOn = true;
    displaySwitchDetails();
    m_wire->turnOnWire();

}
void Switch::turnOffSwitch()
{
    m_isSwitchOn = false;
    displaySwitchDetails();
    m_wire->turnOffWire();

}

void Switch::displaySwitchDetails()
{
    cout << endl;
    if(m_isSwitchOn)
    {
        cout << "SwitchNo : " << m_switchNo <<" is On"<< endl;
    }
    else
    {
        cout << "SwitchNo : " << m_switchNo <<" is OFF"<< endl;
    }
}
