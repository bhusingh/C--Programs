#include<iostream>
using namespace std;
int maxSubArraySum(int a[],int n)
{
	int max_so_far=a[0],max_ending_here=a[0];
	int i;
	for(i=1;i<n;i++)
	{
		max_ending_here = max(a[i],max_ending_here +a[i]);
		
		max_so_far = max(max_ending_here,max_so_far);
	}
	return max_so_far;
}
int main()
{
   int a[] = {-2, -3, -4, -1, -2, -1, -5, -3};
   int n = sizeof(a)/sizeof(a[0]);
   int max_sum = maxSubArraySum(a, n);
   cout<<"Maximum contiguous sum is "<< max_sum;
   return 0;
}