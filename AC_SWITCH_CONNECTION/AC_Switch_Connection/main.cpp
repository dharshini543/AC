#include "AC.h"
#include "Finolex_wire.h"
#include "Havels_wire.h"
#include "Polycab_wire.h"
#include "Switch.h"
#include "Wire.h"
#include <iostream>
using namespace std;
enum wire
{
    Polycab = 1,
    Finolex,
    Havels
};

int main()
{
    Wire* wire = NULL;
    AC ac1(1, 40, 40, 1.5, "Voltas", "white");
    Switch s1(1, 10, 5, 50, "philips", "white");

    int choice;
    cout<<endl;
    cout<<"Which Brand of Wire"<<endl;
    cout<<"Enter 1. Polycab wire"<<endl;
    cout<<"      2. Finolex wire"<<endl;
    cout<<"      3. Havels  wire"<<endl;
    cin>>choice;
    switch(choice)
    {
    case Polycab:
    {
        wire = new Polycab_wire(100, 2, 1000, "Black", "Polycab");
        break;
    }
    case Finolex:
    {
        wire = new Finolex_wire(100, 2, 1000, "Black", "Finolex");
        break;
    }
    case Havels:
    {
        wire = new Havels_wire(100, 2, 1000, "Black", "Havels");
        break;
    }
    default:
        cout<<"Invalid input"<<endl;
        break;
    }

    s1.setWire(wire);
    ac1.setWire(wire);
    s1.turnOnSwitch();
    //s1.turnOffSwitch();

    return 0;
}
