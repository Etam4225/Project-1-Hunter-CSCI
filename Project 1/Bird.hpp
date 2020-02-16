/*
Author: Ethan Tam
Course: CSCI-235
Instructor:
Assignment: Project 1

Header for bird
*/
#ifndef Bird_H
#define Bird_H
#include "Animal.hpp"
#include <string>

class Bird : public Animal {
    private:
		bool airborne_;
		bool aquatic_;
	public:
		Bird();
		Bird(std::string name, bool domestic = false, bool predator = false);
		bool isAirborne() const {
			return airborne_;
		};
		bool isAquatic() const {
			return aquatic_;
		};
		void setAirborne();
		void setAquatic();
};
 

#endif