/*Write a program to sort two numbers by using call by reference functions*/
#include<iostream>
using namespace std;
void swap(int &x,int &y);
void swap(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}

int main(){
	int num1=5;
	int num2=10;
	swap(num1,num2);
	cout<<"after swap num1="<<num1<<endl;
	cout<<"after swap num2="<<num2<<endl;
	return 0;
	
}
