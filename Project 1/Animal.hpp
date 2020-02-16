/*
Author: Ethan Tam
Course: CSCI-235
Instructor:
Assignment: Project 1

Header for animals
*/
//#include <string>
#ifndef Animal_H_
#define Animal_H_

class Animal {
private:
    std::string name_;
    bool domestic_;
    bool predator_;
public:
    Animal();
    Animal(std::string name, bool domestic = false, bool predator = false);
    std::string getName() const {
        return name_;
    };
    bool isDomestic() const { 
        return domestic_; 
    };
    bool isPredator() const {
        return predator_;
    };
    void setName(std::string name);
    void setDomestic();
    void setPredator();
};

#endif