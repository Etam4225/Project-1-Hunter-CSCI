/*
Author: Ethan Tam
Course: CSCI-235
Instructor:
Assignment: Project 1

Implementation for mammals
*/
#include <iostream>
#include "Mammal.hpp"
//using namespace std;

Mammal::Mammal() : Animal() {
	hair_ = false;
	airborne_ = false;
	aquatic_ = false;
	toothed_ = false;
	fins_ = false;
	tail_ = false;
	legs_ = false;
}

Mammal::Mammal(std::string name, bool domestic, bool predator) : Animal (name, domestic /*false*/,  predator /*false*/){
	hair_ = false;
	airborne_ = false;
	aquatic_ = false;
	toothed_ = false;
	fins_ = false;
	tail_ = false;
	legs_ = false;
	//setName(name);
}

void Mammal::setHair() {
	hair_ = true;
}

void Mammal::setAirborne() {
	airborne_ = true;
}

void Mammal::setAquatic() {
	aquatic_ = true;
}

void Mammal::setToothed() {
	toothed_ = true;
}

void Mammal::setFins() {
	fins_ = true;
}

void Mammal::setTail() {
	tail_ = true;
}

void Mammal::setLegs(int legs) {
	legs_ = legs;
}