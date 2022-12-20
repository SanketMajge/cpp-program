#include<iostream>
using namespace std;

class AddAmount
{
	private :
	int amount=50;
	
	public :
	addamount()
	{
		
	}
	public :AddAmount(int a)
	{
		amount=a+amount;
	}
	public void displayAmount()
	{
		system.out.println(amount);
	}
}
class ans
{
	public static void main (string[] args)
	{
		addamount a=new addamount();
		addamount b=new addamount(40);
		a.displayamount();
		b.displayamount();
	}
}

