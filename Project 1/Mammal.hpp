/*
Author: Ethan Tam
Course: CSCI-235
Instructor:
Assignment: Project 1

Header for mammals
*/
#ifndef Mammal_H
#define Mammal_H
#include "Animal.hpp"
//#include <string>
class Mammal : public Animal {
	private:
		bool hair_;
		bool airborne_;
		bool aquatic_;
		bool toothed_;
		bool fins_;
		bool tail_;
		int legs_;
	public:
		Mammal();	
		Mammal(std::string name, bool domestic = false, bool predator = false);
		bool hasHair() const {
			return hair_;
		};
		bool isAirborne() const {
			return airborne_;
		};
		bool isAquatic() const {
			return aquatic_;
		};
		bool isToothed() const {
			return toothed_;
		};
		bool hasFins() const {
			return fins_;
		};
		bool hasTail() const {
			return tail_;
		};
		int legs() const {
			return legs_;
		};
		void setHair();
		void setAirborne();
		void setAquatic();
		void setToothed();
		void setFins();
		void setTail();
		void setLegs(int legs);
};
#endif