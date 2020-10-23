#include <iostream>
#include <string>
#include <fstream>
#include "TekstAchterstevoren.h"

void TekstAchterstevoren::draaiTekst(std::string inPad, std::string uitPad) {
	std::ifstream is;
	std::ofstream us;
	
	is.open(inPad);
	us.open(uitPad);

	if (!is || !us) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	is.seekg(0, std::ios::end);
	is >> std::noskipws;

	char ch;
	int plek = is.tellg() -= 1;

	while (plek>=0) {
		is.clear();
		is.seekg(plek);
		is.get(ch);
		us.put(ch);
		plek--;
	} 

	std::cout << "Omdraaien voltooid - bekijk de output file" << std::endl;

	is.close();
	us.close();
}