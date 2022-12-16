#include<stdio.h>
#include<conio.h>
int main()
{
    float x[100],y[100],xp,yp=0,p;
    int i ,j,n;
    
    printf("enter the number of data: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("y[%d]=",i);
        scanf("%f",&y[i]);
    }
    printf("enter the interpolation point : ");
    scanf("%f",&xp);
    //implementation
    for(i=1;i<=n;i++)
    {
        p=1;
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                p*= (xp-x[j])/(x[i]-x[j]);
            }
        }
        yp+= p*y[i];
    }
    printf("at interpolation value %.3f the value is %.3f ",xp,yp);
  
    return 0;
}
