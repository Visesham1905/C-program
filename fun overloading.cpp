#include<iostream>
using namespace std;
class calculate
{
	protected:
	int r,h,area,area1;
	float pi=3.14;
	public:
		void Accept()
		{
			cout<<"\n Enter the redius height ";
			cin>>r>>h;	
		}
};
/*class cone:public calculate
{
	public:
		void show()
		{
			
		}
}*/
class spare:public calculate
{
	public:
		void show()
		{
			area=4*pi*(r*r);
			cout<<"\n area of spare is="<<area;	
		}
};
class circle:public calculate
{
	public:
		void show()
		{
			area1=pi*(r*r);
			cout<<"\n area of circle is="<<area;
		}
};
main()
{
	spare s1;
	s1.Accept();
	s1.show();
	//circle c1;
	//s1= &c1;
	//s1->show();
	s1.show();
}
