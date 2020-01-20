#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char ch;
	
	   cout<<"Enter the Character: ";
	   cin>>ch;
	   
			if(ch>='a'&&ch<='z')
			{
				cout<<"Is LowerCase";
			}
			else if(ch>='A'&&ch<='Z')
			{
				cout<<"Is UpperCase";
			}
			else
			{
				cout<<"Is Not AlphabeT";
			}
}
