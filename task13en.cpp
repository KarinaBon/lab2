#include "iostream"
using namespace std;

int main()
{
float sumdep;
int month;
float profit;
float percent=5;
int daysyear = 365;
int daysmonth = 30;
 
cout << "Enter the deposit in dollars: ";
cin >> sumdep;
cout << "Enter the number of months: ";
cin >> month;
 
cout << "Interest per month: ";
profit = sumdep*(percent/100)/ daysyear*daysmonth;
cout << profit << " $" << endl;
 
cout << "Interest for the whole period: ";
profit *= month;
cout << profit << " $" << endl;
 
cout << "Total payment at the end of the term: "
<< sumdep + profit << " $";
cout << endl << endl;
return 0;
}
