/*
Author: Ethan Tam
Course: CSCI-235
Instructor: 
Assignment: Project 1

Implementation for animals
*/
#include <iostream>
#include "Animal.hpp"
using namespace std;

Animal::Animal() {
    //empty for now 
    domestic_ = false;
    predator_ = false;
}

Animal::Animal(std::string name,bool domestic /*false*/, bool predator /*false*/){
    setName(name);
    domestic_ = domestic;
    predator_ = predator;
}

void Animal::setName(std::string name){ 
    name_ = name;
}

void Animal::setDomestic(){
   domestic_ = true;
}

//********STUB************//
void Animal::setPredator(){
    predator_ = true;
}

