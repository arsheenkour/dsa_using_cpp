//Array->Array is a fixed size sequence collection of data items of same data-type.
//Traversal of array
#include<iostream>
using namespace std;
int main()
{
	int a[50];
	int size;
	cout<<"enter size of array";
	cin>>size;
	cout<<" Enter elements of array :";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"elements of array are:";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}