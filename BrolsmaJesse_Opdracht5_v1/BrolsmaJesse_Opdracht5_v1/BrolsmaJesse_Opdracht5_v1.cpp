#include <iostream>
#include "Bibliotheek.h"
#include "Boek.h"

Bibliotheek* bt = new Bibliotheek();

int main()
{
    Boek* b = new Boek(true);
    delete bt;
}
