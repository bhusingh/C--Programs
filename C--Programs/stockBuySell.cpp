#include<iostream>
using namespace std;
struct stock
{
	int buy;
	int sell;
};
void stockBuySell(int price[],int n)
{
	int i;
	int count=0;
	stock a[n/2+1];
	for(int i=0;i<n;i++)
	{
		while(i<n && price[i+1]<=price[i])
			i++;
		if(i==n-1)
			break;
		a[count].buy = i++;
		while(i<n && price[i]>=price[i-1])
			i++;
		a[count].sell = i-1;
		count++;
		i--;
	}
	for(i=0;i<count;i++)
	{
		cout<<"Buy date "<<a[i].buy<<" sell date "<<a[i].sell<<endl;
	}
}

int main()
{
    // stock prices on consecutive days
    int price[] = {100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(price)/sizeof(price[0]);
 
    // fucntion call
    stockBuySell(price, n);
 
    return 0;
}