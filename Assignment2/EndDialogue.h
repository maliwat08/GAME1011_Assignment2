#pragma once
#include <iostream>
#include <string>
using namespace std;

class EndDialogue {
public:
	void youAreDead() {
		cout << "You are now Dead!";
		exit(0);
	}

	void youAreAlive() {
		cout << "You are Alive!";
		exit(0);
	}
};