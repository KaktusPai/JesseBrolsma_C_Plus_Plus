#include <iostream>
#include <string>
#include <fstream>
#include "TekstCombineren.h"

void TekstCombineren::combineerTekst(std::string inPad1, std::string inPad2, std::string uitPad) {
	std::ifstream is1;
	std::ifstream is2;
	std::ofstream us;

	is1.open(inPad1);
	is2.open(inPad2);
	us.open(uitPad);

	if (!is1 || !is2 || !us) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	std::string regel;

	while (!is1.eof() || !is2.eof()) {
		is1.clear();
		is2.clear();

		if (!is1.eof()) {
			std::getline(is1, regel);
			us << regel << std::endl;
		}

		if (!is2.eof()) {
			std::getline(is2, regel);
			us << regel << std::endl;
		}
	}

	std::cout << "Combineren voltooid - bekijk de output file" << std::endl;

	is1.close();
	is2.close();
	us.close();
}
