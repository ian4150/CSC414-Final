/*HEADER:
Purpose: To implement the menu the user interacts with
Made By: Ian Hurley ON 10/20/20*/

#include "Menu.h"

using namespace std;

void menu::printMenu() {

    cout << "1) Add two numbers" << endl;
    cout << "2) Subtract two numbers" << endl;
    cout << "3) Multiply two numbers" << endl;
    cout << "4) Divide two numbers" << endl;
    cout << "5) Find the result of an exponent" << endl;
    cout << "6) Find the hypotenuse" << endl;
    cout << "7) Find the circumference of a circle" << endl;
    cout << "8) Find the sine of a number" << endl;
    cout << "9) Find the cosine of a number" << endl;
    cout << "10) Find the tangent of a number" << endl;
    cout << "11) Exit menu" << endl;
    //marks end of menu prompt. Beginning of user input
    cout << endl << "Please enter the number of the menu option you wish to use: ";     //Extra endl to increase readability for user
    cin >> choice;

    switch (choice) {
    case 1:   //calls function that calculates a + b = c
        cout << "Please enter the first number ";
        cin >> a;
        cout << "Please enter the second number ";
        cin >> b;

        x.setXY(a, b);  //Passes input to calc
        cout << endl;   //endl for formatting reasons
        x.add();
        break;

    case 2:   //calls function that calculates a - b = c
        cout << "Please enter the first number ";
        cin >> a;
        cout << "Please enter the second number ";
        cin >> b;

        x.setXY(a, b);  //Passes input to calc
        cout << endl;   //endl for formatting reasons
        x.subtract();
        break;

    case 3:   //calls function that calculates a * b = c
        cout << "Please enter the first number ";
        cin >> a;
        cout << "Please enter the second number ";
        cin >> b;

        x.setXY(a, b);  //Passes input to calc
        cout << endl;   //endl for formatting reasons
        x.mult();
        break;

    case 4:   //calls function that calculates a / b = c
        cout << "Please enter the numerator ";
        cin >> a;
        cout << "Please enter the denominator ";
        cin >> b;

        x.setXY(a, b);  //Passes input to calc
        cout << endl;   //endl for formatting reasons
        x.div();
        break;

    case 5:   //calls function that calculates a^b = c
        cout << "Please enter the base number ";
        cin >> a;
        cout << "Please enter the power ";
        cin >> b;

        x.setXY(a, b);  //Passes input to calc
        cout << endl;   //endl for formatting reasons
        x.ex();
        break;

    case 6:   //calls function that calculates a^2 + b^2 = c^2
        cout << "Please enter the first number ";
        cin >> a;
        cout << "Please enter the second number ";
        cin >> b;

        x.setXY(a, b);  //Passes input to calc
        cout << endl;   //endl for formatting reasons
        x.hypot();
        break;

    case 7:   //calls function that calculates b = 2pi*a
        cout << "Please enter the radius ";
        cin >> a;
        
        x.setX(a);
        cout << endl;
        x.circum();
        break;

    case 8:   //calls function that calculates sin(a)
        cout << "Please enter the number for sine ";
        cin >> a;

        x.setX(a);
        cout << endl;
        x.sine();
        break;

    case 9:   //calls function that calculates cos(a)
        cout << "Please enter the number for cosine ";
        cin >> a;

        x.setX(a);
        cout << endl;
        x.cosine();
        break;

    case 10:   //calls function that calculates tan(a)
        cout << "Please enter the number for tangent ";
        cin >> a;

        x.setX(a);
        cout << endl;
        x.tangent();
        break;

    case 11:   //Exit menu statement. Returns to main which will then end program
        cout << "Exiting now" << endl;
        return;
        break;

    default:
        cout << "Please enter in a valid menu option" << endl;
        break;
    }

    cout << endl;
    printMenu();       //Function is not allowed to end until the exit command is used
    return;            //Return to match code standards/avoid being trapped in function in case of errors
}