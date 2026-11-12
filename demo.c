#include<stdio.h>
int main()
{
    int fun(int x)
    {
        if(x%2==0)
        return x/2;
    else
    return x*2;
    }
    printf("%d" ,fun(7)+fun(8));
    return 0;
}