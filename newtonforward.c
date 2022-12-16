#include<stdio.h>


int main()
{
    
    int n = 6; // number of arguments
    /*float x[4] = { 0, 1, 2, 3 };
    float y[4][4] = {
        { 1, 0, 0, 0 },
        { 0, 0, 0, 0 },
        { 1, 0, 0, 0 },
        { 10, 0, 0, 0 },
    };*/
    float x[n];
    x[6]= {100,150,200,250,300,350,400};
    float y[n][n];
    y[6][6]={   { 10.63,0,0,0,0,0,0},
                { 13.03,0,0,0,0,0,0},
                {15.04,0,0,0,0,0,0},
                {16.81,0,0,0,0,0,0},
                {18.42,0,0,0,0,0,0},
                {19.9,0,0,0,0,0,0},
                {21.27,0,0,0,0,0,0},
                
    };
    */
    forward(x,y,n);
    return 0;
}
void forward(float x[4],float y[4][4],int n )

{
     float u,h,sum,p,a;
     printf("enter the interpolation point:");
     scanf("%f",&a);
     for(int j=1;j<n;j++)
     {
        for(int i =0;i<n-j;i++)
        {
            y[i][j]= y[i+1][j-1] - y[i][j-1];
        }
     }
     printf("the table is :\n");
     for(int i =0;i<n;i++)
     {
        printf("\n");
        for(int j =0;j<n-i;j++)
        {
            printf("%f\t",y[i][j]);
        }
     }
     p=1.0;
     sum = y[0][0];
     h = x[1]-x[0];
     u = (a-x[0])/h;
     for(int j =1;j<n;j++)
     {
        p = p * (u-j+1)/j;
        sum = sum +p*y[0][j];
     }
     printf("at this point %f is %f",a,sum);
}
