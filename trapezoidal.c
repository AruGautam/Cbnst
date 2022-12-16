#include<stdio.h>
#include<math.h>
float f(float x)
{
    return 1/(1+pow(x,2));
}
int main()
{
    float lower,upper,intergration=0.0 ,h,k;
    int i ,subinterval;
    printf("enter the lower limit:");
    scanf("%f",&lower);
    printf("enter the upper limit :");
    scanf("%f",&upper);
    printf("enter the subinterval:");
    scanf("%d",&subinterval);

    h = (upper-lower)/subinterval;

    intergration= f(lower) + f(upper);
    for(i =1;i<subinterval;i++)
    {
        k = lower + i*h;
        intergration+= 2*f(k);
    }
    intergration=intergration *h/2;
    printf("the integration is =%.3f",intergration);
    return 0;
}
