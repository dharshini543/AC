#include "AC.h"
#include<iostream>

AC::AC(int ACnum, float length, float width, double capacity, string Brand, string colour)
{
    cout<< "AC constructor"<<endl;
    m_ACnum = ACnum;
    m_length = length;
    m_width = width;
    m_capacity = capacity;
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
    displayACdetails();
}
void AC::turnOffAC()
{
    m_isACOn = false;
    displayACdetails();
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
