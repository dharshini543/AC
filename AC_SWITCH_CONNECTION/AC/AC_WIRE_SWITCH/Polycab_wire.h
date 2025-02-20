#ifndef POLYCAB_WIRE_H
#define POLYCAB_WIRE_H
#include <string>
using namespace std;

class AC;
class Polycab_Wire
{
private:
    string m_colour;
    string m_brand;
    AC* m_AC;

public:
    Polycab_Wire();
    Polycab_Wire(string colour, string brand);
    void turnOnWire();
    void turnOffWire();
    void setAC(AC* A1);
    ~Polycab_Wire();
};

#endif // POLYCAB_WIRE_H

