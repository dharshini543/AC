#ifndef HAVELS_WIRE_H
#define HAVELS_WIRE_H
#include "Wire.h"
#include <string>
using namespace std;

class Havels_wire:public Wire
{
public:
    Havels_wire(float length, float thickness, float price, string colour, string brand);
    ~Havels_wire();
};

#endif // HAVELS_WIRE_H
