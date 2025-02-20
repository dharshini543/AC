#ifndef AC_H
#define AC_H
#include "Polycab_wire.h"
#include"Finolex_wire.h"
#include "Havels_wire.h"
#include <string>
using namespace std;

class AC
{
private:
    int m_ACnum;
    string m_Brand;
    string m_colour;
    Polycab_Wire* m_Polycabwire;
    Finolex_Wire* m_FinolexWire;
    Havels_Wire* m_HavelsWire;

public:
    AC();
    AC(int ACnum, string Brand, string colour);
    void turnOnAC();
    void turnOffAC();
    void setPolycabWire(Polycab_Wire* P);
    void setFinolexWire(Finolex_Wire* F);
    void setHavelsWire(Havels_Wire* H);
    ~AC();
};

#endif // ACUNIT_H
