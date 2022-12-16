#include<stdio.h>
float f(float x,float y)
{
    return x+y;
}
int main()
{
    float x0,xn,y0,h;
    int i,subinterval;
    printf("enter the x0,y0,interval :");
    scanf("%f%f%d",&x0,&y0,&subinterval);
    printf("enter the xn:");
    scanf("%f",&xn);

    h= (xn-x0)/subinterval;

    while(x0<xn)
    {
        y0=y0+h*f(x0,y0);
        x0=x0+h;
    }
    printf("value of y at %f is: %f",xn,y0);
    return 0;

}
