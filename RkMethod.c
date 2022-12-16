#include<stdio.h>
float f (float x,float y)
{
    return x+y;
}
int main()
{
    float x,y,xn,h,k,k1,k2,k3,k4;
    printf("enter the values of x,y,h,xn:");
    scanf("%f%f%f%f",&x,&y,&h,&xn);
    while(x<xn)
    {
        k1= h*f(x,y);
        k2=h*f(  (x+h/2) , ((y+h/2)*k1));
        k3 = h*f( (x+h/2), ((y+h/2)*k2));
        k4 = h*f((x+h),(y+h*k3));
        k= h*(k1+2*k2+2*k3+k4)/6;
        y=y+h*k;
        x=x+h;

    }
    printf("value at %f is = %f",xn,y);
    return 0;
}
