#include <iostream>
using namespace::std;
int main()
{
    int time;
    cout << "Enter time(min):";
    cin >> time;
    int hours = time / 60;
    int min = time % 60;
    cout<< hours << " hours " << min << " min " << endl;
}


