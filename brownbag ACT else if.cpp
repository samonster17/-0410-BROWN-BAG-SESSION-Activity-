#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
   
   int day ,year ,month;
   
  cout<< "INPUT NUMBERS ONLY\n ";
   
   cout<< "Enter DAY: ";
   cin>> day;
   
   cout<< "Enter MONTH: ";
   cin>> month;
   
   cout<< "Enter YEAR: ";
   cin>> year;
   
if (month == 1 && day <32)
  	cout<< "JANUARY " << day << "," << year << endl;	
 
	else if (month == 2 && day < 29)
	cout<< "FEBRUARY " << day << "," << year << endl;

	else if (month == 3 && day <32)
	cout<< "MARCH " << day << ", " << year << endl;

	else if (month == 4 && day <32)
	cout<< "APRIL " << day << ", " << year << endl;
	
	else if (month == 5 && day <32)
	cout<< "MAY " << day << ", " << year << endl;

	else if (month == 6 && day <31)
	cout<< "JUNE " << day << ", " << year << endl;

	else if (month == 7 && day <32)
	cout<< "JULY " << day << ", " << year << endl;

	else if (month == 8 && day <32)
	cout<< "AUGUST " << day << ", " << year << endl;

	else if (month == 9 && day <31)
	cout<< "SEPTEMBER " << day << ", " << year << endl;

	else if (month == 10 && day <32)
	cout<< "OCTOBER " << day << ", " << year << endl;

	else if (month == 11 && day <31)
	cout<< "NOVEMBER " << day << ", " << year << endl;

	else if (month == 12 && day <32)
	cout<< "DECEMBER " << day << ", " << year << endl;
	 	
    else
    cout << "INVALID DATE";


_getch();
   return 0;
}

