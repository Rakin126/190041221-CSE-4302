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


    void geValue()
    {
        cout<<"Enter the value"<<endl;
        cin>>ans;
    }

    void setValue(int val)
    {
        ans=val;
    }

    void add (int val)
    {
        ans=ans+val;
    }

    void subtract (int val)
    {
        ans=ans-val;
    }

    void multiply (int val)
    {
        ans=ans*val;
    }

    void divideBy(int val)
    {
        if(val==0)
        {
            cout<<"Error : divide by 0 is undefined."<<endl;
        }
        else
        {
            ans=ans/val;
        }
    }

    void display()
    {

        cout<<"Calculator display:";
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

    // cal.geValue();

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


}
