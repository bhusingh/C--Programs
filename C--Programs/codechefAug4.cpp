#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	int i, j, T, m, n, k;
	//int arr[500];
	cin >> T;
	while (T--)
	{
		vector <int> table;
		int count = 0;
		cin >> m >> n;
		//cout<<"m = "<<m<<" n ="<<n<<endl;
		vector <int> v;
		for (i = 0; i<n; i++)
		{
			cin >> k;
			//cout<<"K = "<<k<<endl;
			v.push_back(k);
		}
		for (i = 0; i < m; i++)
			table.push_back(0);
		for (i = 0; i<n; i++)
		{
			int flag = 0, flag2 = 0;
			for (j = 0; j<m; j++)
			{
				if (table[j] == v[i])
				{
					flag = 1;
					break;
				}
			}
			if (flag)
				continue;
			for (j = 0; j<m; j++)
			{
				if (table[j] == 0 )//|| m == 1)
				{
					table[j] = v[i];
					//sort(table.begin(), table.begin() + m);
					flag2 = 1;
					count++;
					break;
				}
			}
			if (!flag2)
			{
				int flag3 = 0;
				int k, max_index = i, number = 0;
				for (j = 0; j < m; j++)
				{
					for (k = i; k < n; k++)
					{
						if (v[k] == table[j])
						{
							break;
						}
					}
					if (k == n)
					{
						table[j] = v[i];
						flag3 = 1;
						count++;
						break;
					}
				}
				if (!flag3)
				{
					int index = 0;
					for (j = 0; j < m; j++)
					{
						for (k = i ; k < n; k++)
						{
							if (v[k] == table[j])
							{
								if (k > max_index)
								{
									index = j;
									max_index = k;
								}
							}
						}
					}
					table[index] = v[i];
					count++;
					//break;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}