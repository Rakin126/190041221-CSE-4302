#include<stdio.h>

int main()
{
    int n=1617;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",n/i);
        }
    }
}
