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
 
cout << "Введіть суму депозиту в долларах: ";
cin >> sumdep;
cout << "Введіть кількість місяців: ";
cin >> month;
 
cout << "Відсотки на місяць: ";
profit = sumdep*(percent/100)/ daysyear*daysmonth;
cout << profit << " $" << endl;
 
cout << "Відсотки за весь період: ";
profit *= month;
cout << profit << " $" << endl;
 
cout << "Загальна сума виплати в кінці терміну: "
<< sumdep + profit << " $";
cout << endl << endl;
return 0;
}
