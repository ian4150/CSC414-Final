/* Header:
	Purpose: To be the header class that defines the math functions
	Made by: Ian Hurley, 11/13/2020
	Included In: menu.h, calc.cpp
	*/
	
	#include <iostream>
	#include <cmath>
	
	using namespace std;
	
	class calc {
	public:
		//Constructors
		calc();

		//Functions
		void add();			//Dec for a+b
		void subtract();	//Dec for a-b
		void mult();		//Dec for a*b
		void div();			//Dec for a/b
		void ex();			//Dec for a^b
		void hypot();		//Dec for a^2 + b^2 = c^2
		void circum();		//Dec for 2*pi*r
		void sine();		//Dec for sin(a)
		void cosine();		//Dec for cos(a)
		void tangent();		//Dec for tan(a)

		//Setters
		void setX(float);		//Set only X, which is a in comments
		void setXY(float, float);	//Sets both X and Y

	protected:
		//Variables
		float x;	//Value to hold first input
		float y;	//Value to hold second input
		float z;	//Value to hold answers
	};