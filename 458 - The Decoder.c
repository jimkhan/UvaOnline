#include<stdio.h>
#include<string.h>

int main()

{
    char a[1000];
    int i;

    while(scanf("%s",&a)==1)
    {



        for(i=0; a[i]!='\0'; i++)
        {

            a[i]=a[i]-3;
            printf("%c",a[i]);
        }
        printf("\n");
    }

    return 0;
}

