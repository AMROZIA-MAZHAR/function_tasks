/*Some credit card companies assign a special digit, called a check digit, to the end of each
customer’s credit card number. Many methods for creating the check digit have been
developed. One very simple method is to append the second digit in the credit card number
to the end of the number. For example, if the first four characters in the credit card number
are 1357, you would append the number 3 to the end of the number, making the credit card
number 13573. Write a program that prompts the user to enter a five-digit credit card
number, with the fifth digit being the check digit. Verify that the user entered exactly five
numbers. If the user entered the required number of characters, verify that the last character
is the check digit. Display appropriate messages indicating whether the credit card number
is valid or invalid. Save and then run the program. Test the program appropriately.*/

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>
using namespace std;
string get_input();
int check_length(string);
int string_int(string);
void check_valid(int);

string get_input(){
	string number="";
	cout<<"plz enter your 5_digit number"<<endl;
	getline(cin,number);
	return number;
}
int check_length(string number){
	int num_length=number.length();
		if(number!="-1"){
		if(num_length==5){
			cout<<"cradit card number contain "<<num_length<<" digits number is valid"<<endl;
		}
		else 
		cout<<"cradit card number is invalid"<<endl;
}
	return num_length;
}
int string_int(string number){
    // object from the class stringstream 
    stringstream geek(number);
  
    // The object has the value 12345 and stream 
    // it to the integer x 
    int x=0; 
    geek >> x; 
    // Now the variable x holds the value 12345 
    cout << "string to integer value : " << x<<endl; 
   return x;
}
void check_valid(int x){
	int rem1,rem2;
    rem1 = x %10;
    x = x / 10;
    cout << rem1 << endl;
    for(int i=0;i<3;i++){
    rem2 = x %10;
    x = x / 10;
}
    cout << rem2 << endl;

	if(rem1==rem2){
			cout<<"cradit card number is valid"<<endl;
		}
		else 
		cout<<"cradit card number is invalid"<<endl;
}
int main(){
		string number=get_input();
		int num_length=check_length(number);
	    int x= string_int(number);
	    check_valid(x);
	    return 0;
	}
	

	
	
	
	
	
	

