#ifndef POLYCAB_WIRE_H
#define POLYCAB_WIRE_H
#include <string>
#include "Wire.h"
using namespace std;

class Polycab_wire:public Wire
{
public:
    Polycab_wire(string colour, string brand);
    void turnOnWire();
    void turnOffWire();
    ~Polycab_wire();
};

#endif // POLYCAB_WIRE_H
