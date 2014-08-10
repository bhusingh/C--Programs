#include<iostream>
#include<stdio.h>
#include<climits>
using namespace std;
int maxDiff(int arr[],int n)
{
	int max_=INT_MIN,count=n-1;
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]<arr[count])
		{
			max_ = max(max_,arr[count]-arr[i]);
		}
		else
		{
			count = i;
		}
	}
	return max_;
}
int main()
{
  int arr[] = {1, 2, 90, 10, 11};
  printf("Maximum difference is %d",  maxDiff(arr, 5));
  getchar();
  return 0;
}