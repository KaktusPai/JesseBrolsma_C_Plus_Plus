#include <iostream>
#include "Bibliotheek.h"
#include "Boek.h"

void Bibliotheek::leenUit(Boek* boek) {
	boek->beschikbaar = false;
}

void Bibliotheek::brengTerug(Boek* boek) {
	boek->beschikbaar = true;
}

void Bibliotheek::checkKeuze(Boek* boek) {
	std::cout << "Wil je een boek lenen of terugbrengen?" << std::endl;
	std::cout << "<1> Lenen" << std::endl;
	std::cout << "<2> Terugbrengen" << std::endl << std::endl;

	int keuze;
	std::cin >> keuze;

	if (keuze == 1 && boek->beschikbaar == false) {
		std::cout << "Boek is al uitgeleend" << std::endl;
	}
	else if (keuze == 1 && boek->beschikbaar == true) {
		std::cout << "Hier is je boek!" << std::endl;
		leenUit(boek);
	}

	if (keuze == 2 && boek->beschikbaar == false) {
		std::cout << "Bedankt voor het terugbrengen" << std::endl;
		brengTerug(boek);
	}
	else if (keuze == 2 && boek->beschikbaar == true) {
		std::cout << "Het boek is al terug.." << std::endl;
	}
}

Bibliotheek::~Bibliotheek() {
	std::cout << "Bibliotheek gaat dicht" << std::endl;
}
