#include<iostream>
using namespace std;
main()
{
	//declaration of array
	int i;
	int arr[5];
	
  //taking input 
  cout<<"Enter the elements of array: \n";
	for(i=0;i<5;i++)
  {
	    cin>>arr[i];
	}
	
	cout<<"\nYou entered: ";
	for(i=0;i<5;i++)
	{
		cout<<endl<<*(arr + i);
	}	
}
