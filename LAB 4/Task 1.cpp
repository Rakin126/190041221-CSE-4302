#include<bits/stdc++.h>
using namespace std;

class Calculator
{
private:
    int ans;
public:
    Calculator()
    {
        ans=0;
    }
    Calculator(int val)
    {
        ans=val;
    }
    void geValue()
    {
        cout<<"Enter the value";
        cin>>ans;
    }

    void setValue(int Value)
    {
        ans=Value;
    }
    void add (int Value)
    {
        ans=ans+Value;
    }
    void subtract (int Value)
    {
        ans=ans-Value;
    }
    void multiply (int Value)
    {
        ans=ans*Value;
    }
    void divideBy(int Value)
    {
        if(Value==0)
        {
            cout<<"Error : divide by 0 is undefined."<<endl;

        }
        else
        {
             ans=ans/Value;
        }
    }

    void display()
    {

        cout<<"Calculator display: ";
        cout<< ans <<endl;
    }


    void clear()
    {
        ans=0;
    }
    ~Calculator()
    {
        cout<<"Calculator object is destroyed."<<endl;
    }


};




int main()
{
    Calculator cal;
    cal.add(10);
    cal.display();

    cal.add(7);
    cal.display();

    cal.multiply (31);
    cal.display();

    cal.subtract (42);
    cal.display();

    cal.divideBy (7);
    cal.display();

    cal.divideBy (0);
    cal.display();

    cal.add (3);
    cal.display();

    cal.subtract (1);
    cal.display();

    cal.clear();
    cal.display();

    return 0;
}
