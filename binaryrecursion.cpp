#include <bits/stdc++.h>
#define ll long long
using namespace std;
void rec(string x,int i)
{
	if (i==x.length()-1)
	{
		if (x[i]=='0')
		{
			cout<<x<<endl;
			x[i]='1';
			rec(x,i);
		}
		else
		{
			cout<<x<<endl;
			return;
		}
	}
	else if (x[i]=='0')
	{
		rec(x,i+1);
		x[i]='1';
		rec(x,i);
	}
	else
	{
		rec(x,i+1);
	}
}
int main()
{

		string x;
		cin>>x;
		rec(x,0);
	return 0;
}
