#include <iostream>
#include <string>

void clearScreen(){
    system("PAUSE");
    system("CLS");
}

void displayRandomNumber(){
    int randomNumber = rand() % 10;
    std::cout << randomNumber << std::endl;
}

void inputSameNumbers(){
	int num1;
    std::cin >> num1 std::endl;
    if (num1) {
        std::cout << "Good" << std::endl;
    }
    else {
        std::cout << "Bad, you lose" << std::endl;
        return;
    }
}

int repeat = 0;

int main()
{
    bool goodAnswer = true;
    while (goodAnswer == true) {
        std::cout << "Simon says" << std::endl;

        for (int i = 0; i < 3 + repeat; i++) {
            displayRandomNumber();
        }

        clearScreen();

        for (int i = 0; i < 3 + repeat; i++) {
            inputSameNumbers();
        }

        repeat++;
        clearScreen();
    }
}
