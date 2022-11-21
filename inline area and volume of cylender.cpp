#include<iostream>
using namespace std;
class cylender
{
		int r,h,area,volume;
		float pi=3.14;
		public:
			void area1();
			void volume1();
};
inline void cylender::area1()
			{
				cout<<"Enter  the radius and volume ";
				cin>>r>>h;
				area=2*pi*r*h;
				cout<<"\n area of cylender is="<<area;
			}
inline void cylender::volume1()
			{
				cout<<"\n Enter  the radius and volume ";
				cin>>r>>h;	
				volume=2*pi*(r*r)*h;
				cout<<"\n volume of cylendre is ="<<volume;	
			}
main()
{
cylender c1;
c1.area1();
c1.volume1();
}
