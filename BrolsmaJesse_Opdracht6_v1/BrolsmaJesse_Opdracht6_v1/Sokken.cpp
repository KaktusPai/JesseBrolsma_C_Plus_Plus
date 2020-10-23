#include <iostream>
#include <string>
#include "Sokken.h"
	
Sokken::Sokken(std::string klr) {
	this->kleur = klr;
}

Sokken::Sokken(const Sokken& s) {
	std::cout << "Copy constructor aangeroepen" << std::endl;
	if (this == &s) return;
	this->kleur = s.kleur;
}

Sokken& Sokken::operator=(const Sokken& s) {
	std::cout << "Assignment operator aangeroepen" << std::endl;
	if (this == &s) return *this;
	this->kleur = s.kleur;
	return *this;
}

Sokken::~Sokken() {
	std::cout << "Sokken gescheurd" << std::endl;
}