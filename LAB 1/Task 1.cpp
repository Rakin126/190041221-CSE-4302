#include<iostream>
using namespace std;

class Counter
{
public:
    void setIncrementStep(int step_val)
    {
       a=step_val;
       void increment(int a);
    }
    void increment(int a)
    {
        count=count+a;
        return;
    }
    int getCount()
    {
        return count;
    }
    void resetCount()
    {
        count=0;
    }
private:
    int count;
    int a;

};

int main()
{
    Counter A;
    A.resetCount();
    int x,Y;
    int i=1;
    while(i)
    {
        cout<<"1.increment"<<endl;
        cout<<"2.Show Value"<<endl;
        cout<<"3.Reset"<<endl;
        cout<<"4.Exit"<<endl;

        cin>>x;
        if(x==1)
        {
            cin>>Y;
            A.setIncrementStep(Y);
        }
       else if(x==2)
        {
            cout<<A.getCount();
            cout<<endl;
        }
       else  if(x==3)
        {
            A.resetCount();
        }
       else if(x==4)
        {
            break;
        }
        cout<<endl;
    }


}
