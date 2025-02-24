#include "AC.h"
#include<iostream>

AC::AC(int ACnum, string Brand, string colour)
{
    cout<< "AC constructor"<<endl;
    m_ACnum = ACnum;
    m_Brand = Brand;
    m_colour = colour;
}

void AC::setWire(Wire* w)
{
    m_wire = w;
    w->setAC(this);
}

AC::~AC()
{
    cout<< "AC Destructor"<<endl;
}

void AC::turnOnAC()
{
    m_isACOn= true;
    cout<<"AC is turned ON"<<endl<<endl;
}

void AC::turnOffAC()
{
    m_isACOn = false;
    cout<<"AC is turned OFF"<<endl<<endl;
}

void AC::displayACdetails()
{
    if(m_isACOn)
    {
        cout<< "ACnum : " << m_ACnum << " is On"<<endl<<endl;
    }
    else
    {
        cout<< "ACnum : " << m_ACnum << " is OFF"<<endl<<endl;
    }

}
