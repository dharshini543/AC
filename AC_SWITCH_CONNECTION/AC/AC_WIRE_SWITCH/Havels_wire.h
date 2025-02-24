#ifndef HAVELS_WIRE_H
#define HAVELS_WIRE_H
#include <string>
using namespace std;

class AC;
class Havels_Wire
{
private:
    string m_colour;
    string m_brand;
    AC* m_AC;

public:
    Havels_Wire();
    Havels_Wire(string colour, string brand);
    void turnOnWire();
    void turnOffWire();
    void setAC(AC* A1);
    ~Havels_Wire();
};

#endif // HAVELS_WIRE_H


