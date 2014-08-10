#include<iostream>
#include<algorithm>
using namespace std;
int partition(int a[],int p,int r)
{
	int x=a[r];
	int i=p-1;
	int temp;
	while(p<r)
	{
		if(a[p]<x)
		{
			i++;
			temp = a[p];
			a[p]=a[i];
			a[i]=temp;
		}
		p++;
	}
	temp=a[r];
	a[r]=a[i+1];
	a[i+1]=temp;
	return i++;
}
void sort_quick(int A[],int p,int r)
{
	if(p<r)
	{
		int q = partition(A,p,r);
		sort_quick(A,p,q-1);
		sort_quick(A,q+1,r);
	}
}
bool hasArrayTwoCandidates(int A[],int arr_size,int n)
{
	sort_quick(A,0,arr_size-1);
	for(int i=0;i<6;i++)
		cout<<A[i]<<endl;
	int l=0;
	while(l<arr_size-1)
	{
		if(A[l]+A[arr_size-1]==n)
		{
			cout<<A[l]<<" "<<A[arr_size-1];
			return true;
		}
		else if(A[l]+A[arr_size-1]<n)
			l++;
		else	
			arr_size--;
	}
	return false;
}
int main()
{
	int A[] = {1, 4, 45, 6, 10, -8};
    int n = 16;
    int arr_size = 6;
    
    if( hasArrayTwoCandidates(A, arr_size, n))
        cout<<"Array has two elements with sum 16";
    else
        cout<<"Array doesn't have two elements with sum 16 ";
 
    return 0;
}