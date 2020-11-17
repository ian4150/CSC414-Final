/*HEADER:
Purpose: Declare the menu function that the user interacts with constantly
Used by Menu.cpp and Main
Made By: Ian Hurley ON 10/20/20*/

#pragma once
#include <iostream>
#include "calc.h"

using namespace std;

class menu {
public:
	void printMenu();		//Declare function to display menu to user

protected:
	int choice = 0;	//Variable that holds user menu choice
	float a = 0;		//Var to hold user input
	float b = 0;		//Var to hold user input
	calc x;		//Declaration to use the calc class
};