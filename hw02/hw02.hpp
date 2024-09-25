// CS1B
// Margarita Kattsyna
// HW02
// a menu-driven program that will make the coffee shop operational.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
// declaring the functions
void userMenu();
void showCupCount();
void showMoneyMade();
void showCoffeeSold();
void sellCoffee();
void printTheData();

// the price
const double SMALL = 1.75;
const double MEDIUM = 1.90;
const double LARGE = 2.00;

// amount of coffee used
const int SMALL_OZ = 9;
const int MEDIUM_OZ = 12;
const int LARGE_OZ = 15;

// declaring global variables 
//I HAVE TO DETETE EXTERN AND PASS TO THE FUNCTIONS BY REFERENCE
extern int smallCups;
extern int mediumCups;
extern int largeCups;
extern double totalAmount;
extern int coffeeSold;