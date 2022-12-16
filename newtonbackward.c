#include<stdio.h>
void backward(float x[4],float y[4][4],int n);
int main()
{
    
    int n = 4; // number of arguments
    float x[4] = { 0, 1, 2, 3 };
    float y[4][4] = {
        { 1, 0, 0, 0 },
        { 0, 0, 0, 0 },
        { 1, 0, 0, 0 },
        { 10, 0, 0, 0 },
    };
    backward(x,y,n);
}
void backward(float x[4],float y[4][4],int n)
{
    float a ,h,u,sum,p;
    printf("enter the interploation point :");
    scanf("%f",&a);
    for(int j=1;j<n;j++)
    {
        for(int i =j;i<n;i++)
        {
            y[i][j]= y[i][j-1]-y[i-1][j-1];
        }
    }
    printf("the table is :\n");
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j =0;j<=i;j++)
        {
            printf("%f\t",y[i][j]);
        }
    }
    p=1.0;
    sum = y[n-1][0];
    h = x[1]-x[0];
    u=(a-x[n-1])/h;
    for(int j =1;j<n;j++)
    {
        p=p*(u+j-1)/j;
        sum = sum +p*(y[n-1][j]);
    }
    printf("\nvalue  is %lf ",sum);
}
