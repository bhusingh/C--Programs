#include<iostream>
#include<algorithm>
using namespace std;
void minAbsSumPair(int arr,int r)
{
	sort(arr,arr+r);
	int l=0,min_sum=arr[0];
	while(l<r)
	{
		int sum = arr[l]+arr[r];
		if(sum<0)
		{
			l++;
		}
		else
			r++;
	}
}
int main()
{
  int main()
  int arr[] = {1, 60, -10, 70, -80, 85};
  int n = sizeof(arr)/sizeof(arr[0]);
  minAbsSumPair(arr, n);
  return 0;
}
}