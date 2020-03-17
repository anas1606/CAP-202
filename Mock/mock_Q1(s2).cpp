#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	
	int a[n];
	
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
	int temp=n;
	
		for(int i=0;i<n/2;i++)
		{
			if(i==temp)
			{
				cout<<" "<<a[i];
				break;
			}
		
				cout<<" "<<a[i]<<" "<<a[temp];
				temp--;
			
		}
}
