#include<iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;
int getMedian(int ar1[],int ar2[],int n)
{
	int *ar3 = (int*)malloc(sizeof(int)*(n+1));
	int i=0,j=0,k=0,count=0;
	if(n==1)
	{
		return (ar1[0]+ar2[0])/2;
	}
	while(i<=n+1)
	{
		if(ar1[j]<ar2[k])
		{
			ar3[i]=ar1[j];
			i++;
			j++;
			count++;
		}
		else
		{
			ar3[i]=ar2[k];
			i++;
			k++;
			count++;
		}
		if(count == n+1)
			{
				cout<<ar3[n-1]<<" "<<ar3[n]<<" "<<n<<endl;
				int median = (ar3[n-1]+ar3[n])/2;
				return median;
			}
	}
}
using namespace std;
int main()
{
    /*int ar1[] = {1};
    int ar2[] = {2};*/
    int ar1[] = {1, 12, 15, 26, 38};
    int ar2[] = {2, 13, 17, 30, 45};
 
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    if (n1 == n2)
        printf("Median is %d", getMedian(ar1, ar2, n1));
    else
        printf("Doesn't work for arrays of unequal size");
    return 0;
}