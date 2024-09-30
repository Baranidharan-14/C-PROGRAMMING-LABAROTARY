#include<stdio.h>
int main()
{
    float l,b;
    scanf("%f%f",&l,&b);
    float area;
    area=l*b;
    printf("%f\n",area);
    float perimeter;
    perimeter=2*l+2*b;
    printf("%f",perimeter);
    return 0;
}
