#include<iostream>
using namespace std;

int main()
{
	int no1,no2,no3;
	
	
	   cout<<"Enter the Three Values: ";
	   cin>>no1>>no2>>no3;
	   
	   
	      if(no1>no2)
	      {
	      	if(no1>no3)
	      	{
	      	  cout<<"No1 Is GreateR"<<endl;
	        }
	        else
	        {
	        	cout<<"No3 is Greater"<<endl;
			}
		  }
		  else if(no2 > no3)
		  {
		  	cout<<"No2 is GreateR"<<endl;
		  }
		  else
		  {
		  	 cout<<"No3 is GreateR"<<endl;
		  }
	      
}
