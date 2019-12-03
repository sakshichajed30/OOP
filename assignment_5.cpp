#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    p:int i=0;
    char ch;
    string a;

    try
    {
    	cout<<"Enter city name (Enter name in capitals) : ";
    	cin>>a;

    	if(a=="PUNE"||a=="MUMBAI"||a=="BANGALORE"||a=="CHENNAI"||a=="pune"||a=="bangalore"||a=="chennai"||a=="mumbai")
    	 {
    	 	cout<<"\nDo you have 4-wheeler?\n~press Y if yes\n~press N if no\n";
    	 	cin>>ch;
    	 	if(ch=='n'||ch=='N')
    	 	{
			  i=1;
    	 	  throw i;
    	    }
    	    cout<<"\nCONGRATULATIONS! There is parking available for you.";
		 }

		 else
		 {
		 	throw i;
		 }
	}


	catch(int x)
	{
		if(x==0)
		cout<<"\nERROR! Parking is not available in this city. Enter correct city.";

		if(x==1)
		cout<<"\n SORRY.currently parking is available only for 4-wheelers.";

	    char ch1;
	    cout<<"\nDo you want to continue? (~press Y/N) : ";
    	cin>>ch1;
    	cout<<"\n\n";
    	if(ch1=='y'||ch1=='Y')
		goto p;

	}

    return 0;

}
