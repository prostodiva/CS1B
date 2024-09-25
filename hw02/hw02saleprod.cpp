#include "hw02.hpp"

void sellCoffee(int smallC, int mediumC, int largeC, double totalAm, int coffeeS) {
	
	int choice = 0;
	int cupsQuantity = 0;
	double price, result;

	cout << "\nEnter 1 to buy coffee in a small cup size (9 oz)"<<endl;
	cout << "Enter 2 to buy coffee in a medium cup size (12 oz)" <<endl;
	cout << "Enter 3 to buy coffee in a large cup size (15 oz)" <<endl;
	cout << "Enter 4 to exit." << endl;
	cin >> choice;
	cout <<"The choice was "<<choice<<endl;
	cout << "Enter the number of cups: "<<endl;
	cin >> cupsQuantity;
	cout << "The amount of cups entered: "<< cupsQuantity<<endl;

	switch (choice) {
		case 1: price = SMALL;
				smallC += cupsQuantity;					//counts the amount of smallCups
				result = price * cupsQuantity;				//how much the customer has to pay
					break;
		case 2: price = MEDIUM; 
				mediumC += cupsQuantity;
				result = price * cupsQuantity;
					break;
		case 3: price = LARGE; 
				largeC += cupsQuantity;
				result = price * cupsQuantity;
					break;
		case 4: return;
	}

	cout <<"Please pay: $ "<< result<<endl;

	totalAm += price * cupsQuantity;					// the total amount was made
	coffeeS += SMALL_OZ * smallC + MEDIUM_OZ * mediumC + LARGE_OZ * largeC;	//the total amount of coffee was made

	}

