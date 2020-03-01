/*Write a C++ program that calculates the average of three numbers by using call by
reference functions.*/
#include<iostream>
using namespace std;
int average(int &a,int &b,int &c);
int average(int &a,int &b,int &c){
	int num,avg;
	cout<<"Average of how many numbers you want to calculate"<<endl;
	cin>>num;
	avg=(a+b+c)/num;
}
int main(){
	int num1=10;
	int num2=20;
	int num3=30;
	int avg=average(num1,num2,num3);
	cout<<"average is: "<<avg<<endl;
	return 0;
}
