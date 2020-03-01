/*Write a C++ Program to Check Palindrome Number by using call by reference functions.*/
#include<iostream>
using namespace std;
int palindrome(int &n);

int palindrome(int &n){
	int rev,digit;
	do{
	digit=n%10;
	rev=(rev*10)+digit;
	n=n/10;
    }
    while(n!=0);
return rev;
}
int main(){
	int num;
	cout<<"enter the number: ";
	cin>>num;
	int number=num;
	int rev=palindrome(num);
	cout<<rev<<endl;
	if(number==rev)
	cout<<"palindrome number"<<endl;
	else
	cout<<"number is not palindrome"<<endl;
	return 0;
}
