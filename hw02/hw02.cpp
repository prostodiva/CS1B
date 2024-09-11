#include "hw02.hpp"

int main()					
{

	int choice = 0;

	do
	{
		userMenu();
		cin >> choice;
		cout << "The choice was \n" << choice<<endl;

		switch (choice)
		{
		case 1:
			sellCoffee();
			break;
		case 2:
			showMoneyMade();
			break;
		case 3:
			showCoffeeSold();
			break;
		case 4:
			showCupCount();
			break;
		case 5:
			printTheData();
			break;
		case 6:
			return 0;
		}

	} while (choice != 6);

	return 0;
}
