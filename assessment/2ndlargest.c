#include <stdio.h>

int main()
    {
    int n;
    printf("enter the size:\n");
    scanf("%d",&n);

    int b=0;   
    int a[n];
    int c;
    printf("enter the numbers:\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);

    if(a[i]>b){
        b=a[i];
    }
}





printf("2nd largest numberoutput is:%d",c);
}