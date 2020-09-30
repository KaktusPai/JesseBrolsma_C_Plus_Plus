#include <iostream>
#include <string>

class Persoon {
	public:
		int age;
		std::string name; 
		virtual void getAge();
		virtual void getName();
};

class Student : public Persoon {
	public: 
		int studentNummer;
		int year;
		int field;
};

class Docent : public Persoon {
	public:
		float salary;
};

void Persoon::getAge(){
	std::cout << age << std::endl;
}

void Persoon::getName() {
	std::cout << name << std::endl;
}

int main()
{
	Student studentObject;
	Docent docentObject;

	studentObject.name = "Klaas";
	studentObject.age = 22;
	studentObject.getName();
	studentObject.getAge();

	docentObject.name = "Peter";
	docentObject.age = 44;
	docentObject.getName();
	docentObject.getAge();
}
