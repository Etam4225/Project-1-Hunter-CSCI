/*
Author: Ethan Tam
Course: CSCI-235
Instructor:
Assignment: Project 1

Header for fishies
*/
#ifndef Fish_H
#define Fish_H
#include "Animal.hpp"
#include <string>
//#include <string>
class Fish : public Animal {
private:
	bool venomous_;
public:
    Fish();
    Fish(std::string name, bool domestic = false, bool predator = false);
    bool isVenomous() const {
        return venomous_;
    };
    void setVenomous();
};
#endif