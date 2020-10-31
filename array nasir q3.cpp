#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"how many times you want to run array"<<endl;
	cout<<"enter the number of array"<<endl;
	cin>>n;
	cout<<"ok you want to run an array"<<n<<"times"<<endl;
//	cout<<endl;
	int arr[n],i;
	int secondlargest=0;
	int largest=0;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"enter the"<<i+1<<"elements"<<endl;
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>largest)
		{
		secondlargest=largest;
		
		largest=arr[i];
	    }
		else if(arr[i]>secondlargest)
		{
		secondlargest=arr[i];
	    }
		
	}
	//cout<<endl;
	cout<<"secondlargest number is ="<<secondlargest<<endl;
	return 0;
	
}
