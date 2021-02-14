#include <iostream>
#include <conio.h>
#include <math.h>		
using namespace std;
int main( )
{	
float r, h, S, p;
cout << "Input r and h: "  << endl;
p=3,14159;
cin>>r>>h;
S=(p*pow(r,2)*h)/3;
cout << " S = " << S << endl;
getch();
return 0; 
}

