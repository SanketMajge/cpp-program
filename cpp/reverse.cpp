#include<iostream>
 using namespace std;
	class reverse
{
	private:
		int n,r;
		
		public :
			void accept()
			{
				cout<<"\n enter number=";
				cin>>n;
			}
			void display()
			{
				while(n>0)
				{
					r=n%10;
					cout<<r;
					n=n/10;
				}
			}
			
		
};
main()
{
	reverse r;
	r.accept();
	r.display();
	
}
