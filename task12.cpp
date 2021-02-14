#include <iostream>
using namespace::std;
int main()
{
    int number;
    cout << "Enter number:";
    cin >> number;
	cout << number % 10; 
	number /= 10;
 	cout << number % 10;
	number /= 10;
 	cout << number % 10;
	number /= 10;
	cout << number % 10;
	number /= 10;
 	cout << endl << endl;
 	return 0;
}


