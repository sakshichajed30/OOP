#include<iostream>
using namespace std;
template <class T>

void selection_sort(T a[],int n)
{
  int i,j;
  T temp;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
}

int main()
{
	int n,i,ch;
	char ch1;
	int a[n];
	float b[n];
	do{
	cout<<"\nEnter type of Array\n~press 1 for INTEGER\n~press 2 for FLOAT\n ~press 3 for Exit";
	cin>>ch;



	switch(ch)
	{
		case 1: cout<<"\nEnter no. of elements\n";
		   		cin>>n;


				cout<<"\nEnter array elements : ";
				for(i=0;i<n;i++)
				{
  					cin>>a[i];
				}
				selection_sort(a,n);
				cout<<"\nAfter sort:";
				for(i=0;i<n;i++)
				{
  					cout<<a[i]<<" ";
				}
				break;

		case 2: cout<<"\nEnter no. of elements\n";
		   		cin>>n;


				cout<<"\nEnter array elements : ";
				for(i=0;i<n;i++)
				{
  					cin>>b[i];
				}
				selection_sort(b,n);
				cout<<"\nAfter sort:";
				for(i=0;i<n;i++)
				{
  					cout<<b[i]<<" ";
				}
				break;

		default: cout<<"\nERROR! enter correct choice.";
	  			break;
	}
	}while(ch!=3);
	return 0;

}
