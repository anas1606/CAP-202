#include<iostream.h>
#include<conio.h>
#include<string.h>
class recod
{
    char name[10];
    int rno;
    int marks;
	public:
		friend void set(char [],int,int,int);
		friend void get(int);
}obj[50];

//Set the value to the class data member
void set(char Name[10],int Rno,int Marks,int i)
{
	strcpy(obj[i].name,Name);
	obj[i].rno=Rno;

	obj[i].marks=Marks;
}

//Get the topper and Display
void get(int j)
{
    int i,k=1;

   int top = obj[1].marks;
   for(i=1;i<=j;i++)
   {
      if(obj[i].marks>top)
      {
	  k=i;
      }
   }

      cout<<endl;
      cout<<"Topper Student"<<endl;
      cout<<"Name: "<<obj[k].name<<endl;
      cout<<"Roll NO: "<<obj[k].rno<<endl;
      cout<<"Marks: "<<obj[k].marks;
}

void main()
{

int sw,i,rno,marks;
char name[10];
clrscr();

cout<<"No of record You want:  ";
cin>>sw;

  for(i=1;i<=sw;i++)
  {
	 cout<<endl<<"*************************"<<endl;
	 cout<<"         Enter The the Recod "<<i<<endl;
	 cout<<"Enter the the Name (10)char: ";
	 cin>>name;
	 cout<<"Enter the the Roll no: ";
	 cin>>rno;
	 cout<<"Enter the The Marks 0 to 100 : ";
	 cin>>marks;

		set(name,rno,marks,i);//function call
}
	get(sw); //function call (get the toper function)
getch();
}
