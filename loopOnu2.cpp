#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        sum = sum+i*i;
    }
    printf("Sum = %d\n",sum);



    return 0;
}

