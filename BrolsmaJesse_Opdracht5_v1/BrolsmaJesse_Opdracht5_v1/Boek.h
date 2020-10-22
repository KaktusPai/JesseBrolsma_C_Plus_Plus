#pragma once
#include "Bibliotheek.h"

class Boek : public Bibliotheek {
	public: 
		bool available;
		Boek(bool a);
};