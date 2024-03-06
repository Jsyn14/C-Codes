// 2.17 Stock Commission Using Boolean variables which are either true or false
#include <iostream>
using namespace std;
	
// this program will display 
// the amount paid for the stock alone (without the commission) $35.00 * 750 == 26,250
// the amount of the commission .2
// the total of the amount paid (for the stock plus the commission 
// 26,250 + .2 

	int main ()
	{
		int transaction, //holds money spent
		stockPrice = 35.00, //price per stock
		Commission = 525, // price of comission @ 2%
		stockBought = 750,// amount of stocks bought
		//toTalPay = stockPrice * stockBought;
		Total = stockPrice * stockBought + Commission; //the cost of the stock bought alone
		 // total with commission
		cout<<" Amount paid for the stock alone: "<< stockPrice << endl;
		cout<< " Amount of the Commission: " << Commission<< endl;
		cout<<" Total without commission paid: " << stockPrice * stockBought << endl;
		cout<<" Total amount paid plus commission: "<< Total << endl;
		
	return 0;
	}
		