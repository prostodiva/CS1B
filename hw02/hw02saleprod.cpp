#include "hw02.hpp"

void sellCoffee() {
	
	int choice = 0;
	int cupsQuantity = 0;
	double price, result;

	cout << "\nEnter 1 to buy coffee in a small cup size (9 oz)"<<endl;
	cout << "Enter 2 to buy coffee in a medium cup size (12 oz)" <<endl;
	cout << "Enter 3 to buy coffee in a large cup size (15 oz)" <<endl;
	cout << "Enter 4 to exit." << endl;
	cin >> choice;											//input
	cout <<"The choice was "<<choice<<endl;
	cout << "Enter the number of cups: "<<endl;
	cin >> cupsQuantity;
	cout << "The amount of cups entered: "<< cupsQuantity<<endl;

	switch (choice) {
		case 1: price = SMALL;
				smallCups += cupsQuantity;					//counts the amount of smallCups
				result = price * cupsQuantity;				//how much the customer has to pay
					break;
		case 2: price = MEDIUM; 
				mediumCups += cupsQuantity;
				result = price * cupsQuantity;
					break;
		case 3: price = LARGE; 
				largeCups += cupsQuantity;
				result = price * cupsQuantity;
					break;
		case 4: return;
	}

	cout <<"Please pay: $ "<< result<<endl;

	totalAmount += price * cupsQuantity;					// the total amount was made
	coffeeSold += SMALL_OZ * smallCups + MEDIUM_OZ * mediumCups + LARGE_OZ * largeCups;	//the total amount of coffee was made

	}

