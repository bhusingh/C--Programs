#include <iostream>
using namespace std;
int fact(int n)
{
	int fac =1;
	if(n==0 || n==1)
		return 1;
	fac = n*fact(n-1);
	return fac;	
}
int main()
{
	int i,a;
    cin>>i;
    while(i>0)
    {
    	cin>>a;
    	cout<<fact(a);
    }
    return 0;
}
