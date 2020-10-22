#include <iostream>
#include "Bibliotheek.h"
#include "Boek.h"

void Bibliotheek::leenUit() {
	Boek* b = new Boek(false);
	if (b->available == false) {
	}
	delete b;
}
