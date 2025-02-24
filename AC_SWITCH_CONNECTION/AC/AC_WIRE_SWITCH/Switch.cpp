#include "Switch.h"
#include<iostream>

Switch::Switch()
{
    cout<< "Switch constructor"<<endl;
}
Switch::Switch(int switchNo, string brand, string colour)
{
    cout<< "Switch constructor"<<endl;
    m_switchNo = switchNo;
    m_brand = brand;
    m_colour = colour;
}

void Switch::setPolycabWire(Polycab_Wire* P)
{
    cout<< "Polycab wire is connected to Switch"<<endl;
    m_Polycabwire = P;
    m_FinolexWire = 0;
    m_HavelsWire = 0;
}
void Switch::setFinolexWire(Finolex_Wire* F)
{
    cout<< "Finolex wire is connected to Switch"<<endl;
    m_FinolexWire = F;
    m_Polycabwire = 0;
    m_HavelsWire = 0;
}
void Switch::setHavelsWire(Havels_Wire* H)
{
    cout<< "Havels wire is connected to Switch"<<endl;
    m_HavelsWire = H;
    m_Polycabwire = 0;
    m_FinolexWire = 0;
}
void Switch::turnOnSwitch()
{
    cout<<"Switch is turned On"<<endl;
    if(m_Polycabwire)
    {
        m_Polycabwire->turnOnWire();
    }
    if(m_FinolexWire)
    {
        m_FinolexWire->turnOnWire();
    }
    if(m_HavelsWire)
    {
        m_HavelsWire->turnOnWire();
    }
}
void Switch::turnOffSwitch()
{
    cout<<"Switch is turned OFF"<<endl;
    if(m_Polycabwire)
    {
        m_Polycabwire->turnOffWire();
    }
    if(m_FinolexWire)
    {
        m_FinolexWire->turnOffWire();
    }
    if(m_HavelsWire)
    {
        m_HavelsWire->turnOffWire();
    }
}

Switch::~Switch()
{
    cout<< "Switch Destructor"<<endl;
}




