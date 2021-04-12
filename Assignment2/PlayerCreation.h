#include <iostream>
#include <string>
using namespace std;

class playerCreation {
public:
    string gender;
    string name;

    void genderChoice(int choiceSelection) {
        cout << "What is your gender?\n1: Male 2: Female\n";
        if (choiceSelection == 1) {
            gender = "Male";
        }//if 1
        if (choiceSelection == 2) {
            gender = "Female";
        }//if 2


    }

    string printGender() {
        return gender;
    }

    void enterName(string n) {
        cout << "What is your name? ";
        name = n;
    }

    string printName() {
        return name;
    }
};