#include<iostream>
using namespace std;
class M;//forword decleration
class S
{
	int x;
	public:
		void set_x(int p) //parameterised constructor
		{
			x=p;
		}
		friend int max(S,M);
};
class M
{
	int y;
	public:
		void set_y(int q)
		{
			y=q;
		}
		friend int max(S,M);
};
int max(S a,M b)
{
	if(a.x>b.y)
	{
		return a.x;
	}
	else
	{
		return b.y;
	}
};
int main()
{
	S a;
	a.set_x(70);
	M b;
	b.set_y(30);
	cout<<max(a,b);
}
