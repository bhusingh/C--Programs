#include<iostream>
#include<stdio.h>
using namespace std;
int findPeakUtil(int arr[],int start,int end,int n)
{
	if(start>end)
		return -1;
	int mid = end+(start-end)/2;
	if((mid==0||arr[mid]>=arr[mid-1])&&(arr[mid]>=arr[mid]+1||mid==n-1))
		return mid;
	else if(mid>0 && arr[mid]<arr[mid-1])
	{
		return findPeakUtil(arr,start,mid-1,n);
	}
	else
		return findPeakUtil(arr,mid+1,end,n);
}
int findPeak(int arr[],int n)
{
	return findPeakUtil(arr,0,n-1,n);
}
int main()
{
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Index of a peak point is %d", findPeak(arr, n));
    return 0;
}