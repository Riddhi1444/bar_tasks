#include<stdio.h>
int main()
{

    int a=10,b=20,p,q,r;
    p=add(a,b);
    q=mult(a,b);
    r=sub(a,b);
printf("%d\n%d\n%d", p,q,r);
return 0;
}


int add(x,y)
{
    int sum=x+y
    return sum;
}

int mult(x,y)
{
    int prod=x*y;
    return prod;
}

int sub(x,y)
{
     diff=x-y;
    return diff;
}

