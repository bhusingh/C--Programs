#include<iostream>
#include<stdio.h>
#include<climits>
using namespace std;
int minDist(int arr[],int n,int x,int y)
{
	int i,prev=0;
	int min_distance=INT_MAX;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x||arr[i]==y)
		{
			prev=i;
			break;
		}
	}
	for(;i<n;i++)
	{
		if(arr[i]==x||arr[i]==y)
		{
			if(arr[i]!=arr[prev])
			{
				min_distance=min(min_distance,i-prev);
			}
			else
			{
				prev=i;
			}
		}
	}
	return min_distance;
}
int main()
{
	int arr[] = {2, 5, 3, 5, 4, 4, 2, 3};
    //int arr[] ={3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    int y = 2;
 
    printf("Minimum distance between %d and %d is %d\n", x, y,minDist(arr, n, x, y));
    return 0;
}