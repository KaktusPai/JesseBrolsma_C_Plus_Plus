#include <iostream>
#include <string>
#include "Student.h"
#include "Docent.h"

Student studentObject;
Docent docentObject;

int main()
{
	studentObject.name = "Klaas";
	studentObject.age = 22;
	studentObject.getName();
	studentObject.getAge();

	docentObject.name = "Peter";
	docentObject.age = 44;
	docentObject.getName();
	docentObject.getAge();
}
