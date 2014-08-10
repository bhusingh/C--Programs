#include<iostream>
using namespace std;
void dTob(int n)
{
	if(n==0)
		return;
	int i=n%2;
	dTob(n/2);
	cout<<!i;
}
int main()
{
	int n;
	cin>>n;
	dTob(n);
	return 0;
}