
#include<iostream>
using namespace std;

class date
{
    private:
        int dd, mm, yy;

    public:
        date()
        {
            dd=29;
            mm=9;
            yy=2022;
            cout<<"\nDate Object has been created\n";
        }

        void display()
        {
            cout<<"\nThe Entered Date is :: ";
            cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
        }
};
int main ()
{
date date1;
date1.display ();

return 0;
}
