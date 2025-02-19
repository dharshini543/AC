#ifndef AC_H
#define AC_H

#include "Wire.h"
#include <string>
using namespace std;

class AC
{
private:
    int m_ACnum;
    float m_length;
    float m_width;
    double m_capacity;
    string m_Brand;
    string m_colour;
    bool m_isACOn;
    Wire * m_wire;

public:
    AC(int ACnum, float length, float width, double capacity, string Brand, string colour);
    void displayACdetails();
    void turnOnAC();
    void turnOffAC();
    void setWire(Wire * w);
    ~AC();
};

#endif // ACUNIT_H
