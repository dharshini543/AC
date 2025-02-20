#ifndef SWITCH_H
#define SWITCH_H
#include <string>
#include "Wire.h"
using namespace std;

class Switch
{
private:
    int m_switchNo;
    string m_brand;
    string m_colour;
    bool m_isSwitchOn;
    Wire* m_wire;

public:
    Switch(int switchNo, string brand, string colour);
    void displaySwitchDetails();
    void turnOnSwitch();
    void turnOffSwitch();
    void setWire(Wire* w1);
    ~Switch();
};

#endif // SWITCH_H
