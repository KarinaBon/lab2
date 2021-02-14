#pragma hdrstop 
//#include <condefs.h>
#include <iostream>
#include <conio.h>
#pragma argsused
using namespace std;
int main(int argc, char** argv) 
{
int a, b;
b=10; a=b++;
cout<<"a="<<a<<"b="<<b<<endl;
b=10; a=++b;
cout<<"a="<<a<<"b="<<b<< endl;
//getch();			
return 0;
}

