#include <iostream>
#include <string>

class Student {
    public:
        std::string name;
        int studentNumber;
        int year;
        int field;
        int group;
};

class Teacher {
    public:
        std::string name;
        float salary;
        int field;
};

class Module {
    public:
        std::string name;
        int field;
        int startDate;
        void getModules();
};

class Lesson {
    public:
        std::string name;
        std::string place;
        int day;
        int startTime;
        int startTime;
        void displayLesson();
};

void Module::getModules() {
    //vind de opgegeven modules bij ieder persoon
}

void Lesson::displayLesson(){
    //laat de les zien bij de gebruiker's modules op de juiste datum en tijd
}




