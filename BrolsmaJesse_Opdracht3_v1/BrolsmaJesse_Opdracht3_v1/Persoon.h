#pragma once
#include <string>

class Persoon {
public:
	int age;
	std::string name;
	virtual void getAge();
	virtual void getName();
};
