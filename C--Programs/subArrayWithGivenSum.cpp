#include<iostream>
using namespace std;
void subArraySum(int arr[],int n,int sum)
{
	int i,current_sum = 0,k=0;
	for(i=0;i<n;i++)
	{
		current_sum += arr[i];
		while(current_sum>sum && k<i)
		{
			current_sum -= arr[k];
			k++;
		}
		if(current_sum == sum)
		{
			cout<<"Sum found between index "<<k<<" and "<<i<<endl;
		}
	}
}
int main()
{
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, n, sum);
    return 0;
}