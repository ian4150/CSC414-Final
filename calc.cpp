/*HEADER:
Purpose: To implement functions declared in calc.h
Made by: Ian Hurley ON 11/13/2020*/
#include "calc.h"

using namespace std;

calc::calc() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

void calc::add() {
	z = x + y;	
	cout << x << " + " << y << " = " << z << endl;	//Prints answer to screen
	return;
}

void calc::subtract() {
	z = x - y;
	cout << x << " - " << y << " = " << z << endl;	//Prints answer to screen
	return;
}

void calc::mult() {
	z = x * y;
	cout << x << " * " << y << " = " << z << endl;	//Prints answer to screen
	return;
}

void calc::div() {
	z = x / y;
	cout << x << " / " << y << " = " << z << endl;	//Prints answer to screen
	return;
}

void calc::ex() {
	z = pow(x, y);
	cout << x << " ^ " << y << " = " << z << endl;	//Prints answer to screen
	return;
}

void calc::hypot() {
	z = pow(x, 2) + pow(y, 2);
	z = sqrt(z);
	cout << "The hypotnouse is " << z << endl;
	return;
}

void calc::circum() {
	float a = 0.0;				//Lines 52-53 are needed to get pi
	float pi = 2 * acos(a);		//M_PI does not seem to work and acos won't take 0.0 as argument
	z = 2 * pi * x;
	cout << "The circumfrence is " << z << endl;
	return;
}

void calc::sine() {
	z = sin(x);
	cout << "Sin(" << x << ") is " << z << endl;
	return;
}

void calc::cosine() {
	z = cos(x);
	cout << "cos(" << x << ") is " << z << endl;
	return;
}

void calc::tangent() {
	z = tan(x);
	cout << "tan(" << x << ") is " << z << endl;
}

void calc::setX(float a) {
	x = a;
	return;
}

void calc::setXY(float a, float b) {
	x = a;
	y = b;
	return;
}