#ifndef inctax_H
#define inctax_H
#include <iostream>
using namespace std;


double getInc(double incItem[10], char incDesc[10][40], int &isiz);
double getExp(double expItem[10], char expDesc[10][40], int &esiz);
void getDep(char depNum[10][40], char depRel[10][40], int &dsiz);
void prInc(double incItem[10], char incDesc[10][40], int isiz);
void prExp(double expItem[10], char expDesc[10][40], int esiz);
void prDep(char depNum[10][40], char depRel[10][40], int dsiz);
void prSumm(double incTot, double expTot, double depTot);


#endif


