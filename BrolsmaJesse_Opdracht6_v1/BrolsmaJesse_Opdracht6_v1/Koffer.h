#pragma once
#include <string>
#include "Sokken.h"

class Koffer {
	public:
		Koffer(std::string klr);
		Koffer(const Koffer& k);
		Koffer& operator=(const Koffer& k);
		void sokkenInKoffer(Sokken& s);
		Sokken* sokken = nullptr;
		std::string kleur = "grijs";
		~Koffer();
};
		