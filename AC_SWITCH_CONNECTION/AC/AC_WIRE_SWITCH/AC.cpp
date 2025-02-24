#include "AC.h"
#include<iostream>

AC::AC()
{
    cout<< "AC constructor"<<endl;
}

AC::AC(int ACnum, string Brand, string colour)
{
    cout<< "AC constructor"<<endl;
    m_ACnum = ACnum;
    m_Brand = Brand;
    m_colour = colour;
}
void AC::setPolycabWire(Polycab_Wire* P)
{
    cout<< "Polycab wire is connected to AC"<<endl;
    m_Polycabwire = P;
    P->setAC(this);
}

void AC::setFinolexWire(Finolex_Wire* F)
{
    cout<< "Finolex wire is connected to AC"<<endl;
    m_FinolexWire = F;
    F->setAC(this);
}

void AC::setHavelsWire(Havels_Wire* H)
{
    cout<< "Havels wire is connected to AC"<<endl;
    m_HavelsWire = H;
    H->setAC(this);
}

void AC::turnOnAC()
{
    cout<<"AC is turned ON"<<endl<<endl;
}

void AC::turnOffAC()
{
    cout<<"AC is turned OFF"<<endl<<endl;
}
AC::~AC()
{
    cout<< "AC Destructor"<<endl;
}






