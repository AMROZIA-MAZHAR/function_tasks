#include<iostream>
#include<string>
using namespace std;
string input();
int check(string part_num);
string deliverymethod(string part_num);

int main(){
	string part_num=input();
	int str_length=check(part_num);
	if(str_length==4 || str_length==5){
	cout<<"part number contain "<<str_length<<" characters"<<endl;
	string method=deliverymethod(part_num);
	if(method=="ms")
			cout<<"Mail_Standard"<<endl;
	else if(method=="mp")
			cout<<"Mail_Priority"<<endl;
    else if(method="fs")
    cout<<"FedEx"<<endl;
	else
			cout<<"2nd and 3rd character are not delivery method"<<endl;
	}

	return 0;
}
string input(){
	string part_num;
	cout<<"enter the part number of 4 or 5 characters"<<endl;
	cin>>part_num;
	return part_num;
}
    int check(string part_num){
    	int str_length;
  	    str_length=part_num.length();
  	    return str_length;
}
string deliverymethod(string part_num){
string sub_string=part_num.substr(1,2);
return sub_string;
}



