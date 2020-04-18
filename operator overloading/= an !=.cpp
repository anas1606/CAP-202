#include<iostream>
using namespace std;

class temp
{
	private:
		int a;
	public:
		
		void get(int x)
		{
			a=x;
		}	
	
	int operator==(temp);
	int operator!=(temp);
};

int temp::operator==(temp M)
{
	if(this->a == M.a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int temp::operator!=(temp N)
{
	if(this->a != N.a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int x;
	cout<<"Enter the value For OBj1: ";
	cin>>x;
	class temp obj1;
	obj1.get(x);
	
	cout<<"Enter the value For OBj2: ";
	cin>>x;
	class temp obj2;
	obj2.get(x);
	
	
		if(obj1==obj2)
		{
			cout<<"Obj1 and Obj2 are equal";
		}
		
		else if(obj1!=obj2)
		{
			cout<<"Obj1 and Obj2 are not Equal";
		}
}
