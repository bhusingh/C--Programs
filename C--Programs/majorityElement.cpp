#include<iostream>
using namespace std;
void check(int a[],int max_count,int size)
{
int count;
	for(int i=0;i<size;i++)
	{
		if(a[i]==a[max_count])
		{
			count++;
			if(count>(size/2))
			{	
				cout<<a[i];
				break;
			}
		}
	}
}
void printMajority(int a[],int size)
{
	int max_count=1;
	int max_index=0;
	for(int i=1;i<size;i++)
	{
		if(a[i]==a[i-1])
		{
			max_count++;
		}
		else if(max_count==0)
		{
			max_index=i;
			max_count=1;
		}
		else{
		max_count--;
		}
	}
	check(a,max_index,size);
}
int main()
{
    int a[] = {1,3,1,1, 3, 3, 1, 3,3,1,3,1,2,3};
    printMajority(a, 14);
    return 0;
}