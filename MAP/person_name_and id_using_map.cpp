#include<iostream>
#include<map>
using namespace std;

int main()
{
	// Initializing a map with integer keys
  	// and corresponding string values
	map<int,string> emp;
	
	//Inserting values in map using insert function
	emp.insert(pair<int,string>(1,"jango"));
	emp.insert(pair<int,string>(2,"Jazz"));
	emp.insert(pair<int,string>(3,"Hopper"));
	
	// Inserting values using Array index notation
	emp[0] = "Otila";
	emp[4] = "Dagger";
	
	// Printing values in the map
	for(map<int,string>::iterator it=emp.begin();it!=emp.end();it++)
	{
		cout<<(*it).first<< ":"<< (*it).second <<endl;	
	}
	
	// Finding the value corresponding to the key '1'
	map<int,string>::iterator it = emp.find(1);
	if(it != emp.end())
		cout<<endl<<"value of 1 = "<<emp.find(1)->second;	
}
