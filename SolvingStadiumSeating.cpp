// Input is num of seats classificiation sold
// ClassA
// ClassB
// ClassC
//^^^ Promt user to answer three questions about sales 

// Process
// Calculate the total of money from all sales

//Jayson Hamilton 
// Output
// Print total amount of sales

// Going to use setpersision to round up 2 dec. for $$
 
#include <iostream>
#include <iomanip>
using namespace std;

	int main()
	{
		//constants for the ticket pricres
		const double class_A_price = 15.0;
		const double class_B_price = 12.0;
		const double class_C_price = 9.0;
		
		//variables
		int classAtickets;
		int classBtickets;
		int classCtickets;
		double total;
		
		//Read the number of Class A sold.
		cout << " This program ask how many tickets for each class of seats were sold." << endl;
		cout << " Enter number of class A sold." << endl;
		cin >>  classAtickets;
		cout << " Enter number of class A sold." << endl;
		cin >>  classBtickets;
		cout << " Enter number of class A sold." << endl;
		cin >>  classCtickets;
		// Calculate the total of revenue
		total= (classAtickets * class_A_price) +
				(classBtickets * class_A_price) +
				(classCtickets * class_C_price);
				
		//display the toatal revenue
		cout << " Total of Revenue from ticket sales is $"
			 << setprecision(2) << fixed << total << endl;
			 
			 return 0;
	}
		