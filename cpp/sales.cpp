#include<iostream>
using namespace std;
class sales
{
	private:
		float squa, target;
		char sname[20],pname[20];
		int comm;
		
		public:
			void accept()
			{
				cout<<"\n salesman name:";
				cin>>sname;
				cout<<"\n product name:";
				cin>>pname;
				cout<<"\n sale quality:";
				cin>>squa;
				cout<<"\n target:";
				cin>>target;
			}
			void calculate()
			{
				if (squa>target)
				{
					comm = (squa - target) *25/100+(target*10)/100;
					
					}
					else if(squa == target)
					{
						comm=target*10/100;
					}
					else
					{
						comm=0;
					}
				}
				void display()
				{
					cout<<"\n "<<sname;
					cout<<"\t"<<pname;
					cout<<"\t"<<squa;
					cout<<"\t"<<target;
					cout<<"\t"<<comm;
					
				}
			};
			int main()
			{
				sales s[20];
				int i,n;
				cout<<"\n enter the num:=";
				cin >>n;
				for(i=0;i<n;i++)
				{
					s[i].accept();
				}
				cout<<"\n sname \t pname \t sque \t target \t comm";
				for(i=0;i<n;i++)
				{
					s[i].calculate();
				}
				for(i=0;i<n;i++)
				{
					s[i].display();
				}
				return 0;
			}
