/*Write a program that outputs inflation rates for two successive years and whether the
inflation is increasing or decreasing. Ask the user to input the current price of an item and
its price one year and two years ago. To calculate the inflation rate for a year, subtract the
price of the item for that year from the price of the item one year ago and then divide the
result by the price a year ago. Your program must contain at least the following functions:
a function to get the input, a function to calculate the results, and a function to output the
results. Use appropriate parameters to pass the information in and out of the function. Do
not use any global variables.*/

#include<iostream>
using namespace std;
void get_input(double&,double&,double&);
double inflation_rate(double,double,double);
void display(double);
void get_input(double& p1,double& p2,double& p3){
	cout<<"enter the current price of item"<<endl;
	cin>>p1;
	cout<<"enter price of item one year ago "<<endl;
	cin>>p2;
	cout<<"enter price of item two year ago"<<endl;
	cin>>p3;
}
double inflation_rate(double current_price,double previous_price1,double previous_price2){
	double inflate;
	inflate=(current_price-previous_price1)/previous_price2;
    return inflate;
	
}

int main(){
	double new_inflate;
	double current_price,previous_price1,previous_price2;
	get_input(current_price,previous_price1,previous_price2);
	new_inflate=inflation_rate(current_price,previous_price1,previous_price2);
	cout<<new_inflate<<endl;
	return 0;
}

