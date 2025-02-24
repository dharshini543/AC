#ifndef FINOLEX_WIRE_H
#define FINOLEX_WIRE_H
#include"Wire.h"
#include <string>
using namespace std;

class Finolex_wire:public Wire
{
public:
    Finolex_wire(string colour, string brand);
    void turnOnWire();
    void turnOffWire();
    ~Finolex_wire();
};

#endif // FINOLEX_WIRE_H
