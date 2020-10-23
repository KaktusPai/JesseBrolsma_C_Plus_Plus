#pragma once
#include <string>
#include "Koffer.h"

class Caravan {
	public:
		Caravan(std::string klr);
		Caravan(const Caravan& c);
		Caravan& operator=(const Caravan& c);
		void kofferInCaravan(Koffer& k);
		void laatInhoudZien();
		Koffer* koffer = nullptr;
		std::string kleur = "grijs";
		~Caravan();
};