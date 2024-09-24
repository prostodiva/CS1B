#include "inctax.h"

int main() {

	char taxPayer[40]; 									//name of tax payer
	char year[5];										//year in question(char)
	double incItem[10];									//gross income from each source
	char incDesc[10][40];								//gross income item description
	int isiz = 0;										//to hold number of income items entered
	double incTot = 0;									//total gross income for the year

	double expItem[10];									//expense items(morgage interest, medical)
	char expDesc[10][40]; 							    //expense item description
	int esiz = 0;										//to hold number of expense items entered
	double expTot;										//total expense for the year
				
	char depNum[10][40];								//name of each dependent
	char depRel[10][40];								//relationship of each dependent
	int dsiz = 0;										//numbeer of dependents entered if any
	double depTot = 0;
	int entCount = 0;

	cout <<"This is a simple tax calculator."<<endl;

		cout <<"Enter tax payer name: "<<endl;
		cin >>taxPayer;
		cout <<"Enter tax year: "<<endl;
		cin >>year;
		cout <<"You have entered: "<<taxPayer<<", "<<year<<endl;

	incTot = getInc(incItem, incDesc, isiz);			//funtion that calculate total, keep track of number of entries
	prInc(incItem, incDesc, isiz);						//function that output the result
	
	expTot = getExp(expItem, expDesc, esiz); 			//function that get an input and processing of expense items
	prExp(expItem, expDesc, esiz);						//function that performs an output
							
	getDep(depNum, depRel, dsiz);						//performs input(name, relationship)
	prDep(depNum, depRel, dsiz);						// performs output
	
	prSumm(incTot, expTot, depTot);						//function to calculate and summarize the tax owed

	cout <<"Income total: $ "<<incTot<<endl;
	cout <<"Expencies total: $ "<<expTot<<endl;

	return 0;
}
