#include<stdio.h>
#include<stdlib.h>

void main()
{
        int i,n,j,fact;
        system("clear");
        printf("\n enter the range of number :");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
         {
                fact=0;
                for(j=1;j<=j;j++)
           {             
                if(i%j==0)
                        fact++;
	   }
                     
          if(fact==2)
                printf("%d\t",i);
	 }
}
