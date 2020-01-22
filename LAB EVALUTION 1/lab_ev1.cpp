#include<iostream>
#include<conio.h>
using namespace std;

class check
{
	private:
		     int no;
		     
		     int chck_prim(int n)
		     {
		     	no=n;
		     	int i;
		     	
		     	for(i=2;i<=no/2 && no%i!=0;i++)
		     	{
		     	
				}
				
					if(i-1 != n/2)
					{
						return 1;
					}
					else
					{
						return 0;
					}
			 }
	public:
			int get(int n)
			{
				return(chck_prim(n));
			}
};

int main()
{
	int no,f;
    check obj;
	
	cout<<"Enter the No: ";
	cin>>no;
	
	f=obj.get(no);
	
	   if(f==1)
	   {
	   	cout<<"No is Not Prime";
	   }
	   else
	   {
	   	cout<<"NO IS PRIME";
	   }
}
