#include<stdio.h>
#include<stdlib.h>
 
void main()
{
        int i,n,sum=0;
        system("clear");
        printf("\n enter how many natural numbers ou want to sum :");
        scanf("%d",&n);
        for (i=1;i<=n;i++)
        {
                sum+=i;
               printf("\n the sum of given N Natural Numbers are%d",sum);
        }

}
