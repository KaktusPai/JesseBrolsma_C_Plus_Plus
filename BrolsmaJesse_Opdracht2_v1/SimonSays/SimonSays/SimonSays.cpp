#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    bool goodAnswer = true;
    while (goodAnswer == true) {
        int rand1 = rand() % 10;
        int rand2 = rand() % 10;
        int rand3 = rand() % 10;

        int num1;
        int num2;
        int num3;

        cout << "Simon says" << endl;
        cout << rand1 << endl;
        cout << rand2 << endl;
        cout << rand3 << endl;

        system("PAUSE");
        system("CLS");

        cin >> num1;
        if (num1 == rand1) {
            cout << "Good" << endl;
        }
        else {
            cout << "Bad, you lose" << endl;
            break;
        }
        
        cin >> num2;
        if (num2 == rand2) {
            cout << "Good" << endl;
        }
        else {
            cout << "Bad, you lose" << endl;
            break;
        }

        cin >> num3;
        if (num3 == rand3) {
            cout << "Good" << endl;
        }
        else {
            cout << "Bad, you lose" << endl;
            break;
        }

        system("PAUSE");
        system("CLS");
    }
}
