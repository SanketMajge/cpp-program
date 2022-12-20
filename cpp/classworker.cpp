
#include<iostream.h>

class worker
{
  	char	name[50];
        int noh;
        void display()
       {
            cout<<"Name \t\t\t:\t"<<name<<"\n"<<"No of hours worked \t:\t"<<noh;
       }
      public:
      void calculate(int payrate=10)
      {

           noh=noh*payrate; 
           display(); 
      }
      void accept()
      {
        
         cout<<"Enter employee name:-> ";
         cin>>name;
         cout<<"Enter how many hours worked:-> ";
         cin>>noh;
         calculate();
      }
};
int main()
{
   worker w1;
   w1.accept();
   
    return(0);
}
