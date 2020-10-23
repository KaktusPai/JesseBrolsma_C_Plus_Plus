#include <iostream>
#include <string>
#include "Sokken.h"
#include "Koffer.h"
#include "Caravan.h"

int main()
{
	Sokken* s1 = new Sokken("groen");
	Koffer* k1 = new Koffer("rood");
	Caravan* c1 = new Caravan("blauw");

	k1->sokkenInKoffer(*s1);
	c1->kofferInCaravan(*k1);
	c1->laatInhoudZien();

	Caravan* c2 = new Caravan(*c1);

	std::cout << "De caravan is gestolen!!!" << std::endl << std::endl;
	c2->laatInhoudZien();

	delete c1;
	delete c2;
}
