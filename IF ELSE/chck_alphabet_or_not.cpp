#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char ch;
		
		cout<<"Enter The Character: ";
		cin>>ch;
			
		//if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))	
			if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
			{
				cout<<"Character is AlphabeT";
			}
			else
			{
				cout<<"Character is NOT AlphabeT";
			}
}
