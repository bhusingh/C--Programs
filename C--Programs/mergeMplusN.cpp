#include<iostream>
#define NA -1
using namespace std;
void moveToEnd(int mPlusN[],int size)
{
	int i,k;
	k=size-1;
	for(i=size-1;i>=0;i--)
	{
		if (mPlusN[i]!=NA)
		{
			mPlusN[k]=mPlusN[i];
			k--;
		}
	}
	for(i=0;i<size;i++)
		cout<<mPlusN[i];
	cout<<endl;
}
void merge(int mPlusN[],int N[],int m,int n)
{
	int j=0,i=n,k=0;
	while(k<(m+n))
	{
		if(i<(m+n)&& N[j]>mPlusN[i])
		{
			mPlusN[k]=mPlusN[i];
			i++;
			k++;
		}
		else
		{
			mPlusN[k]=N[j];
			j++;
			k++;
		}
	}
}
void printArray(int a[],int n)
{
	int i=0;
	while(i<n)
	{
		cout<<a[i]<<endl;
		i++;
	}
}
int main()
{
  /* Initialize arrays */
  int mPlusN[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
  int N[] = {5, 7, 9, 25};
  int n = sizeof(N)/sizeof(N[0]);
  int m = sizeof(mPlusN)/sizeof(mPlusN[0]) - n;
 
  /*Move the m elements at the end of mPlusN*/
  moveToEnd(mPlusN, m+n);
 
  /*Merge N[] into mPlusN[] */
  merge(mPlusN, N, m, n);
 
  /* Print the resultant mPlusN */
  printArray(mPlusN, m+n);
 
  return 0;
}