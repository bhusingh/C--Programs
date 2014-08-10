#include<iostream>
#include<stdio.h>
using namespace std;
int FindMaxSum(int a[],int n)
{
	int currentSum1=a[0],currentSum2=a[1],max_sum1=a[0],max_sum2=a[1];
	for(int i=2;i<n;i=i+2)
	{
		currentSum1 = max(a[i],currentSum1+a[i]);
		max_sum1 = max(max_sum1,currentSum1);
	}
	for(int i=3;i<n;i=i+2)
	{
		currentSum2 = max(a[i],currentSum2+a[i]);
		max_sum1 = max(max_sum2,currentSum2);
	}
	return max(max_sum1,max_sum2);
}
int main()
{
	//int arr[] = {5,6};
  int arr[] = {5, 5, 10, 100, 10, 5};
  int size = sizeof(arr)/sizeof(arr[0]);
  if(size==1)
  {
	cout<<arr[0];
  }
  else
    printf("%d \n", FindMaxSum(arr, size));
  getchar();
  return 0;
}