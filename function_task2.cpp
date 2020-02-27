/*Create a program that allows the user to enter a password. The program then should create
and display a new password using the rules listed below.
• All vowels (A, E, I, O, and U) in the original password should be replaced with the
letter X.
• All numbers in the original password should be replaced with the letter Z.
• All of the characters in the original password should be reversed*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <bits/stdc++.h> 
using namespace std;
string get_input();
string new_password(string password);
string reverse(string newpass);

string get_input(){
string password;
cout << "Enter password: " << endl;
getline(cin, password);
return password;
}
string new_password(string password){
	for (int i= 0; password[i] != '\0'; i++)
{
switch (password[i])
{
case 'a': 
password[i] = 'X';
break;
case 'e': 
password[i] = 'X';
break;
case 'i':
 password[i] = 'X';
break;
case 'o': 
password[i] = 'X';
break;
case 'u': 
password[i] = 'X';
break;
}
}
for(int i=0;i<=password.length();i++)
	{
		if(password[i]>='0'&& password[i]<='9'){
			password.at(i)='Z';
		}
		}
return password;
}
string reverse(string newpass){
//for (int x = newpass.length() - 1; x >=0; x--){
reverse(newpass.begin(), newpass.end()); 
 // }
  return newpass;
}
int main()
{
string password =get_input();
string newpass=new_password(password);
cout << "encrypted Password: "<<newpass<<endl;
cout<<"new password: "<<reverse(newpass);
return 0;
}
