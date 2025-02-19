#ifndef WIRE_H
#define WIRE_H
#include <string>
//#include"AC.h"
using namespace std;

class AC;
class Wire
{
private:
    float m_length;
    float m_thickness;
    float m_price;
    string m_colour;
    string m_brand;
    bool m_isWireOn;
    AC* m_AC;

public:
    Wire(float length, float thickness, float price, string colour, string brand);
    void displayWireDetails();
    void turnOnWire();
    void turnOffWire();
    void setAC(AC* A1);
    ~Wire();
};

#endif // WIRE_H
