#pragma once
#include "Boek.h"

class Bibliotheek {
public:
	void leenUit(Boek* boek);
	void brengTerug(Boek* boek);
	void checkKeuze(Boek* boek);
	~Bibliotheek();
};