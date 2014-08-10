#include<iostream>
#include<stack>
using namespace std;
void printNGE(int arr[],int n)
{
	stack<int> s;
	s.push(arr[0]);
	for(int i=1;i<n;i++)
	{
		int temp = s.top();
		while(arr[i]>temp && !s.empty())
		{
			s.pop();
			cout<<"Next greater element of "<<temp<<" is "<<arr[i]<<endl;
			if(!s.empty())
			{
			temp = s.top();
			s.pop();
			}
		}
		if(arr[i]<temp)
		{
			s.push(temp);
			s.push(arr[i]);
		}
		else
		{
			s.push(arr[i]);
		}
	}
	while(!s.empty())
	{
		int temp = s.top();
		s.pop();
		cout<<"Next greater element of "<<temp<<" is -1"<<endl;
	}
}
int main()
{
	int arr[]= {11, 13, 3,2,1,5,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}