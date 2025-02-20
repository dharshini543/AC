#include "Switch.h"
#include<iostream>

Switch::Switch(int switchNo, string brand, string colour)
{
    cout<< "Switch constructor"<<endl;
    m_switchNo = switchNo;
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
    cout<<"Switch is turned On"<<endl;
    m_wire->turnOnWire();

}
void Switch::turnOffSwitch()
{
    m_isSwitchOn = false;
    cout<<"Switch is turned OFF"<<endl;
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
