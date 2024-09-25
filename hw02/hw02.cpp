#include "hw02.hpp"

int main()
{

	int choice = 0;
	int smallCups;
	int mediumCups;
	int largeCups;
	double totalAmount;
	int coffeeSold;

	do
	{
		userMenu();
		cin >> choice;
		cout << "The choice was \n" << choice<<endl;

		switch (choice)
		{
		case 1:
			sellCoffee(smallCups, mediumCups, largeCups, totalAmount, coffeeSold);
			break;
		case 2:
			showMoneyMade(totalAmount);
			break;
		case 3:
			showCoffeeSold(coffeeSold);
			break;
		case 4:
			showCupCount(smallCups, mediumCups, largeCups);
			break;
		case 5:
			printTheData(smallCups, mediumCups, largeCups, totalAmount, coffeeSold);
			break;
		case 6:
			return 0;
		}

	} while (choice != 6);

	return 0;
}
