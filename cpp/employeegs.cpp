#include<iostream>
 using namespace std;
	class employee
	{
		private:
			int eid,da,hra,gs;
			char employee [20];
			float bs;
			
			public :
				void accept()
				{
					cout<<"\n employee id=";
					cin>>eid;
					cout<<"\n enter employee name=";
					cin>>employee;
					cout<<"\n enter employee basic salary=";
					cin>>bs;
					da=(12*bs)/100;
					hra=(30*bs)/100;
					gs=bs+da+hra;
				}
				void display()
				{
					cout<<gs;
				}
	};
	main()
	{
		employee e;
		e.accept();
		e.display();
	}
