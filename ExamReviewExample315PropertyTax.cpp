//This program will display property value
//value of property 60% of actual property value(10,000)
// property tax is $0.75 for every $100 =ing .75 *100= 75 * 6000 =450,000
#include <iostream>
#include <iomanip>
using namespace std;

	int main()
{
		//constant variables
		const float Assessment_Per =0.60,
				Property_tax_per = 0.75,
				Hundred = 100;
				
				//variables
				float total_assessment_value,
					  total_property_tax,
					  value_of_property;
					
					//ask user for value of property
					
					//cout << endl;
					cout << "what is the actual property value? $";
					cin >> value_of_property;
					
					total_assessment_value = value_of_property * Assessment_Per;
					total_property_tax = (total_assessment_value / Hundred) * Property_tax_per;
					
					//Display assessment value
					cout<< setprecision(2) << fixed << right << endl;
					cout << "Property Value: $ ";
					
					cout << setw(12) << value_of_property << endl;
					cout << "Assessment  value: $ ";
					
					cout << setw(12) << total_assessment_value << endl;
					cout << "Assessment Value: $ ";
					
					cout << setw(12) << total_property_tax << endl;
					
					cout<< endl;
					
					return 0;
					
}
				
				
				
				