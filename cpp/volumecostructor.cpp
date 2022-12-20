#include<iostream>
using namespace std;

class cube
{
	public:
		double side;
		double volume()
		{
			return(side*side);
			
		
		cube(double side1)
		{
			cout<<"\n constructor is called "<<end1;
			side=side1;
		}
		cube()
		{
			cout<<"\n default constructor is called"<<end1;
		}
		cube()
		{
			cout<<"\nDestructing"<<side<<end1;
		}
};
int main()
{
	cube c1(2.34);
	 cube c2;
	cout<<"\n the side of the cube is:"<< c1.side<<end1;
	cout<<"\n the volume of the :"<< c1.volume()<<end1;
		cout<<"\n enter  the length  of the second cube :"<<c2.side;
		cout<<"\n the volume of the second cube :"<< c2.volume()<<end1;
		return 0;

}
		
	
