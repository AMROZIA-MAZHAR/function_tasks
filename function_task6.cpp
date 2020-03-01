/*The cost to become a member of a fitness center is as follows: (a) Senior citizens discount
is 30%, (b) If membership is bought and paid for 12 or more months, the discount is 15%,
(c) If more than five personal training sessions are bought and paid for, the discount on
each session is 20%. Write a menu-driven program that determines the cost of a new
membership. Your program must contain a function that displays the general information
about the fitness center and its charges; a function to get all of the necessary information
to determine the membership cost; and a function to determine the membership cost. Use
appropriate parameters to pass information in and out of a function.*/

#include<iostream>
using namespace std;
void setPrices(double, double);
void getInfo(bool, bool, bool, int, int);
double membershipcost(double, int, double, int, bool, bool, bool);
void displayinfo();

void displayinfo()
{
    cout << "Welcome to Stay Healty and Fit center." << endl;
    cout << "This program determines the cost of a new membership." << endl;
    cout << "If you are a senior citizen, then the discount is 30% of "
        << "of the regular membership price." << endl;
    cout << "If you buy membership for twelve months and pay today, the "
        << "discount is 15%." << endl;
    cout << "If you buy and pay for 6 or more personal training session today, "
        << "the discount on each session is 20%." << endl;
}
void setPrices(double reg_memprice, double training_sescost)
{

    cout << "Please enter the cost of regular Membership per month: " << endl;
    cin >> reg_memprice;

    cout << "Please enter the cost of one personal traning session: " << endl;
    cin >> training_sescost;
}

void getInfo(bool sencitizen, bool five_moresesion, bool paidmonth,int months,int sessions)
{
    //Senior Verification
    char userInputSenior;
    cout << "Are you Senior? Please enter 'Y' or 'N': ";
    cin >> userInputSenior;

    if (userInputSenior == 'y' && userInputSenior == 'Y')
    {
        sencitizen = true;
    }
    else
        sencitizen = false;

    cout << endl;


    //Number of personal training session.
    cout << "Enter the number of personal training sessions bought: ";
    cin >> sessions;

    if (sessions >= 5)
    {
       five_moresesion = true;
    }
    else
       five_moresesion = false;

    cout << endl;


    //Number of months
    cout << "Enter the number of months you are paying for: ";
    cin >> months;

    if (months >= 12)
    {
        paidmonth = true;
    }
    else
        paidmonth = false;

}
double membershipcost(double reg_memprice, int months,double training_sescost, int sessions,bool sencitizen, bool five_moresesion, bool paidmonth)
{
    double finalMembershipCost, finalSessionCost;


    //Session Discount
    if (five_moresesion)
    {
       training_sescost = training_sescost * 0.8;
    }
    else
    {
        training_sescost = training_sescost;
    }


    //Month Discount
    if (paidmonth)
    {
       reg_memprice = reg_memprice * 0.85;
    }
    else
    {
       reg_memprice = reg_memprice;
    }


    finalMembershipCost = reg_memprice * months;
    finalSessionCost = training_sescost * sessions;

    // Check if Senior Citizen Discount Applies
    if (sencitizen) {
        return (finalMembershipCost * 0.7) + finalSessionCost ;
    }
    else {
        return finalMembershipCost + finalSessionCost;
    }

}

int main(){
	double reg_memprice, training_sescost, membercost;
	bool sencitizen,five_moresesion,paidmonth;
	int months,sessions;
    displayinfo();
    setPrices(reg_memprice,training_sescost);
    getInfo(sencitizen, five_moresesion, paidmonth, months,sessions);
    membercost=membershipcost(reg_memprice, months, training_sescost, sessions,sencitizen,five_moresesion, paidmonth);
    cout<<"member cost is: "<<membercost<<endl;
return 0;
}
