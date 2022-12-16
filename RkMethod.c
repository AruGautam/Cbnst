#include<stdio.h>
float f (float x,float y)
{
    return x+y;
}
int main()
{
    float x0,y0,xn,h,k,k1,k2,k3,k4;
    printf("enter the values of x,y,h,xn:");
    scanf("%f%f%f%f",&x0,&y0,&h,&xn);
    while(x<xn)
    {
       k1 = h * (f(x0, y0));
       k2 = h * (f((x0+h/2), (y0+k1/2)));
       k3 = h * (f((x0+h/2), (y0+k2/2)));
       k4 = h * (f((x0+h), (y0+k3)));
       k = (k1+2k2+3k3+k4)/6;
        y0=y0+h*k;
        x0=x0+h;

    }
    printf("value at %f is = %f",xn,y0);
    return 0;
}
