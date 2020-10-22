#include <iostream>
#include "Bibliotheek.h"
#include "Boek.h"

Boek* boek = new Boek();
Bibliotheek* bieb = new Bibliotheek();

int main() {
	int keren = 0;

	while (keren < 8) {
		bieb->checkKeuze(boek);

		keren++;
		std::cout << "Je hebt de bieb " << keren << "/8 keer bezocht" << std::endl << std::endl;
	}

	delete boek;
	delete bieb;
}
