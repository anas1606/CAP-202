#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    //Numeric to string   
    stringstream ss;
  
    int nInt;
    //read the value froml user
    cout<<"Enter 1 integer Value: ";
    cin>>nInt;
    //directly assing the value(you can also read from user)
    double nDouble = 3.142;
    
    //inserting both the values into stingstream class object ss
    ss << nInt << " " << nDouble;
  
    string myStr1, myStr2;
    
    //extracting the value to the string variable convered value from int to string
	ss >> myStr1 >> myStr2;
	
      
    cout<<"The numeric values converted to string:"<<endl;
    cout << "myStr1 = "<<myStr1 << " " << "myStr2 = "<<myStr2 << endl<<endl;
    
    //string to numeric
    stringstream ns;
    ns << "2019 3.142"; // insert a string of numbers into the stream
    int nIntval;
    double nDoubleval;  
  
    ns >> nIntval >> nDoubleval;
    cout<<"The string values converted to numeric types:"<<endl;
    cout << "nIntval = "<<nIntval << " " <<"nDoubleval = "<< nDoubleval << endl;
    
    return 0;
}
