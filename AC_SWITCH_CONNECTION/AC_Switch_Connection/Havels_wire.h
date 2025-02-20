#ifndef HAVELS_WIRE_H
#define HAVELS_WIRE_H
#include "Wire.h"
#include <string>
using namespace std;

class Havels_wire:public Wire
{
public:
    Havels_wire(string colour, string brand);
    void turnOnWire();
    void turnOffWire();
    ~Havels_wire();
};

#endif // HAVELS_WIRE_H
