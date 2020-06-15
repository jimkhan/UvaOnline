#include<stdio.h>

int main()

{
    int i,j,k,n,t;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("Case #%d: %d = ",i,n);
        for(j=2;j<=n;j++)
        {
            for(k=2;k<=n;k++)
            {
                if(j*k==n)
                {
                    printf("%d*%d =",j,k);
                }
            }
        }
    }
}
