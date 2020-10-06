#include <iostream>
#include <string>

class Muntgeld {
    public:
        float euroWaarde;
};

class VijftigCent : public Muntgeld{
};

class EenEuro : public Muntgeld {
};

class Koffiemuntje : public Muntgeld {
};

class Koffieautomaat {
    public: 
        int inMunt;
		float inEurowaarde;
        void geldCheck(float een, float twee, float drie);
        void mogelijkeKoffie();
};

void Koffieautomaat::geldCheck(float een, float twee, float drie){
	std::cin >> inMunt;
	if (inMunt == 1) {
		inEurowaarde = een;
	}
	if (inMunt == 2) {
		inEurowaarde = twee;
	}
	if (inMunt == 3) {
		inEurowaarde = drie;
	}
	else {
		inEurowaarde = 0;
	}
}

void Koffieautomaat::mogelijkeKoffie() {
	std::cout << "" << std::endl;
	if (inEurowaarde == 0.50) {
		std::cout << "Koffie" << std::endl;
	}
	if (inEurowaarde == 1.00) {
		std::cout << "Koffie" << std::endl;
		std::cout << "Espresso" << std::endl;
	}
	if (inEurowaarde == -1) {
		std::cout << "Koffie" << std::endl;
		std::cout << "Espresso" << std::endl;
		std::cout << "Cappuccino" << std::endl;
	} 
}

VijftigCent vc;
EenEuro ee;
Koffiemuntje km;
Koffieautomaat ka;

int main()
{
	vc.euroWaarde = 0.50;
	ee.euroWaarde = 1.00;
	km.euroWaarde = -1;

    std::cout << "Voor een getal in horend bij jou muntje" << std::endl;
    std::cout << "<1> €0,50" << std::endl;
    std::cout << "<2> €1,00" << std::endl;
    std::cout << "<3> Koffiemuntje" << std::endl;
    ka.geldCheck(vc.euroWaarde, ee.euroWaarde, km.euroWaarde);
    ka.mogelijkeKoffie();
}
