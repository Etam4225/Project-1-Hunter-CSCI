/*
Author: Ethan Tam
Course: CSCI-235
Instructor:
Assignment: Project 1

Implementation for mammals
*/
#include <iostream>
#include <string>
#include "Fish.hpp"

Fish::Fish() : Animal() {
	venomous_ = false;
}

Fish::Fish(std::string name, bool domestic, bool predator) : Animal(name, domestic /*false*/, predator /*false*/) {
	venomous_ = false;
}

void Fish::setVenomous() {
	venomous_ = true;
}
