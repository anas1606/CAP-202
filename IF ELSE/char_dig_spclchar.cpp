#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char ch;
	
		cout<<"Enter the Character: ";
		cin>>ch;
		
			if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))
			{
				cout<<"Is AlphabeT";
			}
			else if(ch>='0' && ch<='9')
			{
				cout<<"Is DigitS";
			}
			else
			{
				cout<<"Is SpeciaL CharacteR";
			}
}
