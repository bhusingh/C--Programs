#include<iostream>
#include<stdio.h>
using namespace std;
int findPivot(int arr[],int start,int end)
{
	if(start>end)
		return -1;
	if(start == end)
		return start;
	int mid = (start+end)/2;
	if(mid<end && arr[mid]>arr[mid+1])
		return mid;
	if(mid>start && arr[mid]<arr[mid-1])
		return mid-1;
	if(arr[start]>=arr[mid])
	{
		findPivot(arr,start,mid-1);
	}
	else
	{
		findPivot(arr,mid+1,end);
	}
}
int binarySearch(int arr[],int start,int end,int no)
{
	if(start>end)
		return -1;
	int mid = (start+end)/2;
	if(arr[mid]==no)
		return mid;
	else if(arr[mid]>no)
	{
		binarySearch(arr,start,mid-1,no);
	}
	else	
		binarySearch(arr,mid+1,end,no);
}
int pivotedBinarySearch(int arr[],int arr_size,int no)
{
	int pivot = findPivot(arr,0,arr_size-1);
	cout<<"pivot"<<pivot<<endl;
	if(pivot == -1)
		return binarySearch(arr,0,arr_size-1,no);
	if(arr[pivot]==no)
		return pivot;
	if(arr[0]<=no)
	{
		return binarySearch(arr,0,pivot-1,no);
	}
	else
		return binarySearch(arr,pivot+1,arr_size-1,no);
}
using namespace std;
int main()
{
   // Let us search 3 in below array
   int arr1[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
   int arr_size = sizeof(arr1)/sizeof(arr1[0]);
   int no = 3;
   printf("Index of the element is %d\n",  pivotedBinarySearch(arr1, arr_size, no));
 
    // Let us search 3 in below array
   int arr2[] = {3, 4, 5, 1, 2};
   arr_size = sizeof(arr2)/sizeof(arr2[0]);
   printf("Index of the element is %d\n",  pivotedBinarySearch(arr2, arr_size, no));
 
   // Let us search for 4 in above array
   no = 4;
   printf("Index of the element is %d\n",  pivotedBinarySearch(arr2, arr_size, no));
 
   // Let us search 0 in below array
   int arr3[] = {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1};
   no = 0;
   arr_size = sizeof(arr3)/sizeof(arr3[0]);
   printf("Index of the element is %d\n",  pivotedBinarySearch(arr3, arr_size, no));
 
   // Let us search 3 in below array
   int arr4[] = {2, 3, 0, 2, 2, 2, 2, 2, 2, 2};
   no = 3;
   arr_size = sizeof(arr4)/sizeof(arr4[0]);
   printf("Index of the element is %d\n",  pivotedBinarySearch(arr4, arr_size, no));
 
   // Let us search 2 in above array
   no = 2;
   printf("Index of the element is %d\n",  pivotedBinarySearch(arr4, arr_size, no));
 
   // Let us search 3 in below array
   int arr5[] = {1, 2, 3, 4};
   no = 3;
   arr_size = sizeof(arr5)/sizeof(arr5[0]);
   printf("Index of the element is %d\n",  pivotedBinarySearch(arr5, arr_size, no));
 
   return 0;
}