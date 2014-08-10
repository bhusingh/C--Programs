#include<iostream>
using namespace std;
void rev(int arr[],int start,int end)
{
	while(start<end)
	{
		int temp=arr[start];
		arr[start++] = arr[end];
		arr[end--]=temp;
	}
}
void rotateArray(int arr[],int size,int d)
{
	rev(arr,0,d);
	rev(arr,d+1,size-1);
	rev(arr,0,size-1);
}
int main()
{
	int a[]={1,2,3,4,5,6,7};
	int d=2;
	int size = sizeof(a)/sizeof(a[0]);
	rotateArray(a,size,d-1);
	for(int i=0;i<size;i++)
		cout<<a[i]<<endl;
}
