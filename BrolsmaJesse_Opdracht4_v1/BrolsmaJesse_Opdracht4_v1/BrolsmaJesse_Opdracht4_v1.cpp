#include <iostream>
#include <string>
#include "KoffieAutomaat.h"

KoffieAutomaat koffieAutomaat;

int main()
{
    std::cout << "Voor een getal in horend bij jou muntje" << std::endl;
    std::cout << "<1> €0,50" << std::endl;
    std::cout << "<2> €1,00" << std::endl;
    std::cout << "<3> KoffieMuntje" << std::endl;
    koffieAutomaat.betaalVoorKoffie();
    koffieAutomaat.checkMogelijkeKoffie();
}
