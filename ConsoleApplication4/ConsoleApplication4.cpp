// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
using namespace std;

class Cat { 
private:
	
	string name;
	int hunger;
	int energy;

public:

	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return this->name;
	}

	void setHunger(int hunger) {
		if (hunger < 0 || hunger>100) {
			cout << "Wrong input!\n";
			return;
		}
		else {
			this->hunger = hunger;
		}
	}

	int getHunger() {
		return this->hunger;
	}

	void setEnergy(int energy) {
		if (energy < 0 || energy>100) {
			cout << "Wrong input!\n";
			return;
		}
		else {
			this->energy = energy;
		}
	}

         int getEnergy() {
		return this->energy;
	}

public:

	void sleep() {
		if (energy > 50) {
			cout << "Cat is not tired!\n";
			return;
		}
		else {
			energy += 50;
		}
	}

	void hunt() {
		if (energy < 30) {
			cout << "Cat is too tired to hunt!\n";
			return;
		}
		else if (hunger > 50) {
			cout << "Cat is not hungry!\n";
			return;
		}
		else {
			hunger += 50;
		}
	}

	void play() {
		if (energy < 50) {
			cout << "Cat is too tired to play!\n";
			return;
		}
		else {
			energy -= 50;
			hunger -= 50;
		}
	}

	void printCat() {
		cout << "Cat name: " << name << endl;
		cout << "Cat energy: " << energy << endl;
		cout << "Cat hunger: " << hunger << endl;
		Sleep(3000);
	}
};


int main()
{
	Cat cat;

	string catName = "Max";
	int catEnergy = 100;
	int catHunger = 100;

	cat.setName(catName);
	cat.setEnergy(catEnergy);
	cat.setHunger(catHunger);

	while (true) {
		cat.play();
		cat.sleep();
		cat.hunt();
		cat.play();
		cat.sleep();
		cat.hunt();
		cat.play();
		cat.hunt();
		cat.sleep();
		cat.printCat();
	}

};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln 
