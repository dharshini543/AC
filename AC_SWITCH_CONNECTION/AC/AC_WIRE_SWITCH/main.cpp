#include<iostream>
#include"Polycab_wire.h"
#include"Finolex_wire.h"
#include"Havels_wire.h"
#include"Switch.h"
#include "AC.h"
using namespace std;

enum wire
{
    Polycab = 1,
    Finolex,
    Havels
};

int main()
{
    AC ac1;
    Switch s1;
    Polycab_Wire* polycab = NULL;
    Finolex_Wire* finolex = NULL;
    Havels_Wire* havels = NULL;
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
        polycab = new Polycab_Wire;
        s1.setPolycabWire(polycab);
        ac1.setPolycabWire(polycab);
        s1.turnOnSwitch();
        s1.turnOffSwitch();
        break;
    }
    case Finolex:
    {
        finolex = new Finolex_Wire;
        s1.setFinolexWire(finolex);
        ac1.setFinolexWire(finolex);
        s1.turnOnSwitch();
        s1.turnOffSwitch();
        break;
    }
    case Havels:
    {
        havels = new Havels_Wire;
        s1.setHavelsWire(havels);
        ac1.setHavelsWire(havels);
        s1.turnOnSwitch();
        s1.turnOffSwitch();
        break;
    }
    default:
        cout<<"Invalid input"<<endl;
        break;
    }


    return 0;
}
