#include "AC.h"
#include "Switch.h"
#include "Wire.h"
using namespace std;

int main()
{
    Wire wire(100, 2, 1000, "Black", "Finolex");

    AC ac1(1, 40, 40, 1.5, "Voltas", "white");

    Switch s1(1, 10, 5, 50, "philips", "white");

    s1.setWire(&wire);
    ac1.setWire(&wire);
    s1.turnOnSwitch();
    s1.turnOffSwitch();

    return 0;
}
