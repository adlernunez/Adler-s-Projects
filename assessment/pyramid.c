#include <stdio.h>

int main()
{
    int n;
    char c ='*';
    printf("enter layers of pyramid:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {   
         for (int b = 1; b<= n - i; b++) {
            printf(" ");
         }
        for (int j=1;j<=(2*i-1);j++)
        {
        printf("%c",c);
        }
        printf("\n");
    }
}