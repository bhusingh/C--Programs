#include<iostream>
using namespace std;
void printLeaders(int arr[],int n)
{
	int leader = arr[n];
	cout<<leader<<endl;
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]>leader)
		{
			leader = arr[i];
			cout<<leader<<endl;
		}
	}
}
int main()
{
  int arr[] = {16, 17, 4, 3, 5, 2};
  printLeaders(arr, 5);  
}    