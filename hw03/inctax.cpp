#include "inctax.h"

double getInc(double incomeAmount[10], char incomeDescr[10][40], int &itemsNum) {
	double total = 0;
	cout <<"Enter the number of income sources(max 10): "<<endl;
	cin >>itemsNum;
	if (itemsNum > 10) {
		cout << "The input should be less than 10";
	} else {
		for (int i = 0; i < itemsNum; i++) {
			cout <<"Enter the description of the source of income: "<<endl;
			cin >>incomeDescr[i];
			cout <<"Enter the amount for income item: "<<endl;
			cin >>incomeAmount[i];
			total +=incomeAmount[i];
		}
	}
	return total;
}


double getExp(double expenseAmount[10], char expItemsDesc[10][40], int &itemsNum) {
	double total = 0;
	cout<< "Enter the number of expensies: (max 10)"<<endl;
	cin >>itemsNum;
	if (itemsNum > 10) {
		cout << "The input should be less than 10";
	} else {
	for (int i = 0; i < itemsNum; i++) {
		cout <<"Enter expense item description: "<<endl;
		cin >>expItemsDesc[i];
				cout <<"Enter amount: "<<endl;
				cin >>expenseAmount[i];
				total += expenseAmount[i];
			}
	}
	return total;

}

void getDep(char depName[10][40], char depRelation[10][40], int &depNum) {
	cout <<"Enter number of dependence: "<<endl;
	cin >>depNum;
	if (depNum > 10) {
		cout << "The input should be less than 10";
	} else {
	for (int i = 0; i < depNum; i++) {
		cout <<"Name: "<<endl;
		cin >>depName[i];
		cout <<"Relationship: "<<endl;
		cin >>depRelation[i];
	}
}
}

void prInc(double incomeItems[10], char incomeDescr[10][40], int itemsNum) {

	for (int i = 0; i < itemsNum; i++) {
		cout <<"\nIncome items: "<<incomeDescr[i]<<" $ "<<incomeItems[i]<<endl;
	}
}

void prExp(double expenseAmount[10], char expItemsDesc[10][40], int itemsNum) {
	for (int i = 0; i < itemsNum; i++) {
		cout <<"\nExpencies: "<<expItemsDesc[i]<<" $ "<<expenseAmount[i]<<endl;
	}
}

void prDep(char depName[10][40], char depRelation[10][40], int depNum) {
	for (int i = 0; i < depNum; i ++) {
		cout <<"\nName: "<<depName[i]<<"\nRelationship: "<<depRelation[i]<<endl;
	}
}

void prSumm(double incTotal, double expTotal, double depTotal) {
	double tax = 0;
	tax = (((incTotal - expTotal) - (depTotal * DEDUCTION)) * TAX_RATE);	//	tax = {[incT ot - expT ot - (depT ot * 3000.00)] * 0.18}
	cout <<"\nTax owed: $ "<<tax<<endl;
}


