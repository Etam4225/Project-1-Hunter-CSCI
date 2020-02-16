// Project 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Code used for testing

#include <iostream>
#include "Animal.hpp"
#include "Mammal.hpp"
#include "Bird.hpp"

using namespace std;
int main()
{
    Animal dog("dog");
    cout << "Made dog...." << "\n"; //animal "dog" is created
    cout << "Name is: " << dog.getName() << "\n" << "Domestic is: " << dog.isDomestic();

    Mammal bear;
    cout << "\n" << "Made bear..." << "\n";
    bear.setName("bear");
    cout << "Name is: " << bear.getName() << "\n" << "Domestic is: " << bear.isDomestic();
    bear.setPredator();
    cout << " and Predator is: " << bear.isPredator() << " toothed is " << bear.isToothed();
    bear.setToothed();
    cout << " \n" << "Bear's toothed is " << bear.isToothed();

    Mammal cat("cat");
    cout << "\n" << "Made cat..." << "\n";
    cat.setDomestic();
    cout << "Name is: " << cat.getName() << "\n" << "Domestic is: " << cat.isDomestic();
   
    Bird bluejay("blue jay");
    cout << "\n" << "Blue Jay airborne : " << bluejay.isAirborne();
    bluejay.setAirborne();
    cout << "\n" << "Blue Jay airborne (after setted) : " << bluejay.isAirborne();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
