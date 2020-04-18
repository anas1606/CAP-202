#include<iostream>
using namespace std;
class temp
{
	int a;
	public:
		void get(int x)
		{
			a=x;
		}
		
		int operator<=(temp& obj)
		{
			if(this->a==obj.a)
			{
				return 0;
			}
			else if(this->a > obj.a)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
};

int main()
{
	class temp obj1;
	class temp obj2;
	
	obj1.get(500);
	obj2.get(4000);
	
	if((obj1<=obj2)==0)
	{
		cout<<"Object 1 And Object 2 Both are equal";
	}
	else if((obj1<=obj2)==1)
	{
		cout<<"Object 1 is greater";
	}
	else
	{
		cout<<"object 2 is greater";
	}
}
