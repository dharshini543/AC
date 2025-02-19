#ifndef POLYCAB_WIRE_H
#define POLYCAB_WIRE_H
#include <string>
#include "Wire.h"
using namespace std;

class Polycab_wire:public Wire
{
public:
    Polycab_wire(float length, float thickness, float price, string colour, string brand);
    ~Polycab_wire();
};

#endif // POLYCAB_WIRE_H
