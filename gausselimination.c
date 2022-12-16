#include<stdio.h>
#define MAX 10
int main()
{
    float x[MAX],a[MAX][MAX],ratio;
    int n ,i,j,k;
    printf("enter the number of unknowns:");
    scanf("%d",&n);
    printf("enter the augmented matrix:\n");
    for( i =1;i<=n;i++)
    {
        for( j =1;j<=n+1;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    //gauss elimination
    for(i =1;i<=n-1;i++)
    {
        if(a[i][i]==0.0)
        {
            printf("error");
            break;
        }
        for(j =i+1;j<=n;j++)
        {
            ratio = a[j][i]/a[i][i];
        
            for(k =1;k<=n+1;k++)
        {
            a[j][k]=a[j][k]- ratio*a[i][k];
        }
        }
    }
    //back
    x[n]= a[n][n+1]/a[n][n];
    for(i =n-1;i>=1;i--)
    {
        x[i]= a[i][n+1];
        for( j =i+1;j<=n;j++)
        {
            x[i]= x[i] - a[i][j]*x[j];
        }
        x[i]= x[i]/a[i][i];
    }
    printf("\nSolution:\n");
	 for(int i=1;i<=n;i++)
	 {
	  	printf("x[%d] = %0.3f\n",i, x[i]);
	 }
     return 0;
}
