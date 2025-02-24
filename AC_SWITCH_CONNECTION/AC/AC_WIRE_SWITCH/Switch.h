#ifndef SWITCH_H
#define SWITCH_H
#include <string>
#include "Polycab_wire.h"
#include "Finolex_wire.h"
#include "Havels_wire.h"
using namespace std;

class Switch
{
private:
    int m_switchNo;
    string m_brand;
    string m_colour;
    Polycab_Wire* m_Polycabwire;
    Finolex_Wire* m_FinolexWire;
    Havels_Wire* m_HavelsWire;

public:
    Switch();
    Switch(int switchNo, string brand, string colour);
    void turnOnSwitch();
    void turnOffSwitch();
    void setPolycabWire(Polycab_Wire* P);
    void setFinolexWire(Finolex_Wire* F);
    void setHavelsWire(Havels_Wire* H);
    ~Switch();
};

#endif // SWITCH_H
