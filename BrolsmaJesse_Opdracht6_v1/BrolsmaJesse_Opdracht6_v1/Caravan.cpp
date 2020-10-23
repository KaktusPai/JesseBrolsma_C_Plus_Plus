#include <iostream>
#include <string>
#include "Caravan.h"

Caravan::Caravan(std::string klr) {
	this->kleur = klr;
}

Caravan::Caravan(const Caravan& c) {
	std::cout << "Copy constructor aangeroepen" << std::endl;
	if (this == &c) return;
	this->kleur = c.kleur;
	koffer = new Koffer(*c.koffer);
}

Caravan& Caravan::operator=(const Caravan& c) {
	std::cout << "Assignment operator aangeroepen" << std::endl;
	if (this == &c) return *this;
	this->kleur = c.kleur;
	koffer = new Koffer(*c.koffer);
	return *this;
}

void Caravan::kofferInCaravan(Koffer& k) {
	this->koffer = &k;
}

void Caravan::laatInhoudZien() {
	std::cout << "In deze caravan met de kleur " << this->kleur << ", zit:" << std::endl;
	std::cout << "- Een koffer met de kleur " << koffer->kleur << std::endl;
	std::cout << "- Een paar sokken met de kleur " << koffer->sokken->kleur << std::endl << std::endl;
}

Caravan::~Caravan() {
	std::cout << "Caravan naar de schroot gebracht" << std::endl;
	delete koffer;
}
