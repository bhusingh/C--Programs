#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int maxDiff(int a[],int n)
{
	int i=0;
	int max_ = a[n],max_diff=0;
	for(i=n-1;i>=0;i--)
	{
		if(a[i]<max_)
		{
			max_diff = max(max_diff,max_-a[i]);
		}
		else
		{
			//max_diff = a[i]-max_+max_diff;
			max_=a[i];
		}
	}

	return max_diff;
}
int main()
{
	//int arr[] = {110,10,90,2,1};
  //int arr[] = {1, 2, 90, 10, 110};
  int arr[]={ 7, 9, 5, 6, 3, 2};
  printf("Maximum difference is %d",  maxDiff(arr, 4));
  getchar();
  return 0;
}