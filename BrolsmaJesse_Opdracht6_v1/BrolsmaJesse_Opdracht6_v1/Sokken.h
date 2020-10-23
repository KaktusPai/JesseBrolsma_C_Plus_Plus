#pragma once
#include <string>
#include "Sokken.h"

class Sokken {
	public:
		Sokken(std::string klr);
		Sokken(const Sokken& s);
		Sokken& operator=(const Sokken& s);
		std::string kleur = "grijs";
		~Sokken();
};