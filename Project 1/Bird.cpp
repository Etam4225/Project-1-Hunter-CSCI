/*
Author: Ethan Tam
Course: CSCI-235
Instructor:
Assignment: Project 1

Implementation for Birds
*/
#include <iostream>
#include "Bird.hpp"
//using namespace std;

Bird::Bird() : Animal() {
	airborne_ = false;
	aquatic_ = false;

}

Bird::Bird(std::string name, bool domestic, bool predator) : Animal(name, domestic /*false*/, predator /*false*/) {
	airborne_ = false;
	aquatic_ = false;
	//setName(name);
	//domestic_ = domestic;
	//predator_ = predator;
}

void Bird::setAirborne() {
	airborne_ = true;
}

void Bird::setAquatic() {
	aquatic_ = true;
}

