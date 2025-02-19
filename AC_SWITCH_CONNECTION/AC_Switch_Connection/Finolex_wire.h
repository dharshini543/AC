#ifndef FINOLEX_WIRE_H
#define FINOLEX_WIRE_H
#include"Wire.h"
#include <string>
using namespace std;

class Finolex_wire:public Wire
{
public:
    Finolex_wire(float length, float thickness, float price, string colour, string brand);
    ~Finolex_wire();
};

#endif // FINOLEX_WIRE_H
