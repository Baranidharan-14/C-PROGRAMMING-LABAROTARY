#include<stdio.h>
int main()
{
    float p,n,r;
    scanf("%f%f%f",&p,&n,&r);
    float simpleinterest;
    simpleinterest=p*n*r/100;
    printf("%f",simpleinterest);
    return 0;
}
