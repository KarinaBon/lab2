#include "iostream"
#include <Windows.h>
using namespace std;

int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
float sumdep;
int month;
float profit;
float percent=5;
int daysyear = 365;
int daysmonth = 30;
 
cout << "������ ���� �������� � ��������: ";
cin >> sumdep;
cout << "������ ������� ������: ";
cin >> month;
 
cout << "³������ �� �����: ";
profit = sumdep*(percent/100)/ daysyear*daysmonth;
cout << profit << " $" << endl;
 
cout << "³������ �� ���� �����: ";
profit *= month;
cout << profit << " $" << endl;
 
cout << "�������� ���� ������� � ���� ������: "
<< sumdep + profit << " $";
cout << endl << endl;
return 0;
}
