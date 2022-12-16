#include<stdio.h>
#define MAX 10
int main()
{
    float a[MAX][MAX],x[MAX],ratio;
    int n ;
    printf("enter the no :");
    scanf("%d",&n);
    printf("enter the augmented matrix:\n");
    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=n+1;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    //gauss jordan

    for(int i =1;i<=n;i++)
    {
        if(a[i][i]==0.0)
        {
            break;
        }
        for(int j =1;j<=n;j++)
        {
            if(i!=j)
            {
            ratio = a[j][i]/a[i][i];
            for(int k =1;k<=n+1;k++)
            {
                a[j][k]-= ratio * a[i][k];
            }
            }
        }
    }
    //obtaining sol
    for(int i =1;i<=n;i++)
    {
        x[i]= a[i][n+1]/a[i][i];
    }
    for(int i =1;i<=n;i++)
    {
        printf("x[%d] = %0.3f \n",i,x[i]);
    }

}
