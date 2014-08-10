#include<iostream>
#include<stdio.h>
using namespace std;
void printArray(int arr[],int n)
{
	int i=0;
	while(i<n)
	{
		cout<<arr[i]<<endl;
		i++;
	}
}
void reverseArray(int arr[],int start,int end)
{
	if(start<end)
	{
		int temp = arr[start];
		arr[start++] = arr[end];
		arr[end--] = temp;
		reverseArray(arr, start, end);
	}
	else	
		return;
	
	
}
int main() 
{
  int arr[] = {1, 2, 3, 4, 5};
  printArray(arr, 5);
  reverseArray(arr, 0, 4);
  printf("Reversed array is \n");
  printArray(arr, 5);
  return 0;
}