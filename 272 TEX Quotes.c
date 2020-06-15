#include<stdio.h>
#include<string.h>

int main()

{
    char a[100];

    int i,j,l,k=0;

    while(gets(a))
    {
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            if(a[i]==34)
            {
                k++;
                if(k%2==0)
                {
                    printf("''");
                }
                else
                {
                    printf("``");
                }
            }
            else
            {
                printf("%c",a[i]);
            }

        }
        printf("\n");
    }

    return 0;
}
