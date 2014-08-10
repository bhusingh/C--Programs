#include<iostream>
#include<cstring>
using namespace std;
void divideString(char str[],int n)
{
	int len = strlen(str);
	if(len%n!=0)
	{
		cout<<"Length of str is not divisible by "<<n<<endl;
		return;
	}
	for(int i=0;i<len;i++)
	{
		if(i%n==0)
			cout<<endl;
		cout<<str[i];
	}
}
int main()
{
    /*length od string is 28*/
    char str[] = "a_simple_divide_string_quest";
 
    /*Print 4 equal parts of the string */
    divideString(str, 4);
    return 0;
}