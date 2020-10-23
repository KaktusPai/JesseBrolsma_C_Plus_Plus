#include <iostream>
#include <string>
#include "Koffer.h"

Koffer::Koffer(std::string klr) {
	this->kleur = klr;
}

Koffer::Koffer(const Koffer& k) {
	std::cout << "Copy constructor aangeroepen" << std::endl;
	if (this == &k) return;
	this->kleur = k.kleur;
	sokken = new Sokken(*k.sokken);
}

Koffer& Koffer::operator=(const Koffer& k) {
	std::cout << "Assignment operator aangeroepen" << std::endl;
	if (this == &k) return *this;
	this->kleur = k.kleur;
	sokken = new Sokken(*k.sokken);
	return *this;
}

void Koffer::sokkenInKoffer(Sokken& s) {
	this->sokken = &s;
}

Koffer::~Koffer() {
	std::cout << "Koffer kapotgemaakt" << std::endl;
	delete sokken;
}