#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char ch;


    cout<<"Enter any character: ";
    cin>>ch;


    // Condition for vowel
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<"Is VoweL.";
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<"Is ConsonanT.";
    }
    else 
    {
        cout<<"Is not an AlphabeT.";
    }

    return 0;
}
