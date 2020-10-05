#include <iostream>
#include <string>

class Muntgeld {
    public:
        int euroWaarde;
};

class VijftigCent : public Muntgeld{
    public:
        int waarde;
};

class EenEuro : public Muntgeld {
    public:
        int waarde;
};

class Koffiemuntje : public Muntgeld {
    public:
        int waarde;
};

class Koffieautomaat {
    public: 
        int ingeworpenGeldWaarde;
        void geldCheck();
        void maakKoffie();
};

void Koffieautomaat::geldCheck(){
    std::cin >> Koffieautomaat::ingeworpenGeldWaarde >> std::endl;
}

void Koffieautomaat::maakKoffie() {

}

VijftigCent vc;
EenEuro ee;
Koffieautomaat ka;


int main()
{
    std::cout << "Voor een getal in horend bij jou muntje" << std::endl;
    std::cout << "<1> €0,50" << std::endl;
    std::cout << "<2> €1,00" << std::endl;
    std::cout << "<3> Koffiemuntje" << std::endl;
    ka.geldCheck();
    ka.maakKoffie();
}
