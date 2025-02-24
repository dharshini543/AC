#ifndef FINOLEX_WIRE_H
#define FINOLEX_WIRE_H
#include <string>
using namespace std;

class AC;
class Finolex_Wire
{
private:
    string m_colour;
    string m_brand;
    AC* m_AC;

public:
    Finolex_Wire();
    Finolex_Wire(string colour, string brand);
    void turnOnWire();
    void turnOffWire();
    void setAC(AC* A1);
    ~Finolex_Wire();
};

#endif // FINOLEX_WIRE_H


