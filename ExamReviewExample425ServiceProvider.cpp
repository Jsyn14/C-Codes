// this program will provied three options for customers choices in Phone data plan
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int choice;
	int charges;
	float gigabytes;
	
	
	
	//Constants for packages rates
	const double PackageA = 39.99,
			  PackageB = 59.99,
			  PackageC = 69.99,
			  Gigabytes1 = 10.00,
			  Gigabytes2 = 5.00;
	
	//Constants for menue choices
	const int PackageA_choice = 1,
			  PackageB_choice = 2,
			  PackageC_choice = 3,
			  Quit_choice = 4;
			  {  
	//Display the menu and get a choice.
	cout << "||====================||\n";
	cout << "|| MOBILE SERVICE PROVIEDER  ||\n";
	cout << "||====================|| \n";
	cout << " 1. Package A\n";
	cout << " 2. Package B\n";
	cout << " 3. Package C\n";
	cout << " 4. Quite the program\n";
	cout << "======================\n";
	cout << "Enter your choice: ";
	cin >> choice;
	
	
		
	//Respond to user's menu selection.
	switch (choice)	
	{
		case PackageA_choice:
		    cout << "How many gigabytes over limit? ";
			cin >> gigabytes,
			charges =(Gigabytes1 * gigabytes * PackageA),
			cout << endl;	
			cout <<  setprecision(2) << fixed <<" Total charges are $" << Gigabytes1 * gigabytes * PackageA << endl;
		    cout << endl;
			
			break;	
	}
			
	//Respond to user's menu selection.
	switch (choice)
	{
		case PackageB_choice:
		    cout << "How many gigabytes over limit? ";
			cin >> gigabytes,
			charges =(Gigabytes2 * gigabytes * PackageB),			
			cout <<  setprecision(2) << fixed <<" Total charges are $" << Gigabytes2 * gigabytes * PackageB << endl;
		    cout << endl;			
			break;
	}
	//Respond to user's menu selection.
	switch (choice)
	{
		case PackageC_choice:
			cout << " End Program with 4\n ";
		    //cout << "How many gigabytes? ";
			//cin >> gigabytes,
			charges =(PackageC),			
			cout <<  setprecision(2) << fixed <<" Total charges are $" << PackageC << endl;
		    cout << endl;
			break;
	}
	//exits progam
		switch (choice)
	{
		case Quit_choice:
			cout << "invalid" << endl;
			break;
   }
			} 
			  return 0;
}
		 

	