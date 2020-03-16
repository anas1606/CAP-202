#include<iostream>
#include<conio.h>
using namespace std;

void sort(int a[],int n)
{
	int t=0,s[6],temp=-1,tn=n;
	int small,max;
	
	a:
	small=max=a[t];
	
	if(t<=n)
	{
		for(int i=t;i<tn;i++)
		{
			for(int j=i;j<tn;j++)
			{
				if(small>a[j])
				{
					small=a[j];
				}
				if(max<a[j])
				{
					max=a[j];
				}
			}
		}
    }
    else
    {
    	t=-1;
	}

	if(t==-1)
	{
		for(int i=0;i<n;i++)
		{
			cout<<" "<<s[i];
		}
	}
	else
	{	
		temp=temp+1;
		s[temp]=small;
		temp=temp+1;
		s[temp]=max;
		
		t=t+1;
		tn=tn-1;
		goto a;
	}
}

int main()
{
	int a[6]={1,2,3,4,5,6};
	sort(a,6);
}
