#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int year;
	
		cout<<"Enter the YeaR: ";
		cin>>year;
		
			//29 day in feb = leap year
			if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
    		{
        		printf("LEAP YEAR");
    		}
    		else
    		{
        		printf("COMMON YEAR");
    		}

}
