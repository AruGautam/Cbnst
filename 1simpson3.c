#include<stdio.h>
#include<math.h>

float f ( float x)
{
    return 1/(1+x*x);
}
int main()
{
    float lower,upper,integration ,h,k;
    int i ,subinterval;

    printf("enter the lower limit:");
    scanf("%f",&lower);
    printf("enter the upper limit:");
    scanf("%f",&upper);
    printf("enter the subinterval");
    scanf("%d",&subinterval);

    h= (upper-lower)/subinterval;
    integration = f(upper)+f(lower);

    for(i=1;i<subinterval;i++)
    {
        k = lower + i*h;
        if(i%2==0)
        {
            integration = integration + 2*f(k);
        }
        else
        {
            integration = integration +4*f(k);
        }
    }
    integration = integration*h/3;
    printf("the definite integral value = %.3f",integration);
    return 0;
}
