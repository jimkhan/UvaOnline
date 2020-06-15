#include<stdio.h>

int main()

{
    int a[1001];
    int i,j,l,t,p;

    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
        }
        p=0;
        for(l=0;l<t;l++)
        {
            for(j=l+1;j<t;j++)
            {

                if(a[l]>a[j])
                {
                    p++;
                }
            }
        }

        printf("Minimum exchange operations : %d\n",p);
    }

    return 0;
}
