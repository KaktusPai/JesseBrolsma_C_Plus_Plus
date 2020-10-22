#include <iostream>
#include <string>
#include "KoffieAutomaat.h"
#include "MuntGeld.h"
#include "VijftigCent.h"
#include "EenEuro.h"
#include "KoffieMuntje.h"

void KoffieAutomaat::betaalVoorKoffie() {
	VijftigCent vijftigCent;
	EenEuro eenEuro;
	KoffieMuntje koffieMuntje;

	vijftigCent.euroWaarde = 0.50;
	eenEuro.euroWaarde = 1.00;
	koffieMuntje.euroWaarde = 999;

	vijftigCent.naam = "vijftig cent";
	eenEuro.naam = "een euro";
	koffieMuntje.naam = "koffie muntje";

	int inMunt;
	std::cin >> inMunt;
	if (inMunt == 1) {
		inEurowaarde = vijftigCent.euroWaarde;
		std::cout << "Je hebt " << vijftigCent.naam << " ingeworpen" << std::endl;
	} else if (inMunt == 2) {
		inEurowaarde = eenEuro.euroWaarde;
		std::cout << "Je hebt " << eenEuro.naam << " ingeworpen" << std::endl;
	} else if (inMunt == 3) {
		inEurowaarde = koffieMuntje.euroWaarde;
		std::cout << "Je hebt " << koffieMuntje.naam << " ingeworpen" << std::endl;
	}
};

void KoffieAutomaat::checkMogelijkeKoffie() {
	std::cout << "Mogelijke koffie:" << std::endl;
	if (inEurowaarde >= 0.50) {
		std::cout << "Koffie" << std::endl;
	}
	if (inEurowaarde >= 1) {
		std::cout << "Espresso" << std::endl;
	}
	if (inEurowaarde >= 999) {
		std::cout << "Cappuccino" << std::endl;
	}
};
