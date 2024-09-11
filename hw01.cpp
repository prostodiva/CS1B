#include "hw01.hpp"

int main() {

	double capacity = 0;			//declare a variable
	double rating = 0;			//declare a variable
	cout <<"Enter a capacity: "<<endl;	//output the string
	cin>>capacity;				//user input
	cout <<"Enter a rating: "<<endl;	//output the string
	cin>>rating;				//user input
	double result = capacity * rating;	//declare a variable and user the formula
	cout <<"The number of milesthe automobile can be driven without recharging: "<<result<<endl; //print the result

	return 0;
}
