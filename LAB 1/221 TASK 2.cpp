#include<iostream>
using namespace std;

class RationalNumber
{
public:
    void assign(int num,int den)
    {
        numerator=num;
        denominator=den;
        if(denominator==0)
        {
            cout<<"ERROR"<<endl;
        }

    }
    double convert()
       {
           sum=numerator/denominator;
       }
   void invert()
    {
       sum=1/sum;
    }
    void print()
    {

    }
private:
    int numerator;
    int denominator;
    double sum;

};

int main()
{
    RationalNumber A;
    int p,q;
    int i=1;
    while(i)
    {
        cout<<"Enter Value P & Q"<<endl;
        /*cout<<"2.Show Value"<<endl;
        cout<<"3.Reset"<<endl;
        cout<<"4.Exit"<<endl;*/

        cin>>p>>q;
        cout<<"1.Show Value"<<endl;
        cout<<"2.Invert"<<endl;
        cout<<"3.Exit"<<endl;
        if(x==1)
        {

            A.setIncrementStep(Y);
        }
       else if(x==2)
        {
            cout<<A.getCount();
            cout<<endl;
        }
       else if(x==3)
        {
            break;
        }
        cout<<endl;
    }


}

