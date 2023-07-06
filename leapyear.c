#include<stdio.h>
 #include<stdlib.h>

 void main()

{
        system("clear");
        printf("\n Enter any year");
        scanf("%d",& year);
        if(year%400==0)
       {
                printf("\n Given year is leap year %d",year);
        }
          
          {
                if(year%100==0)
                        printf("\n Given year is not leap year %d",year);
          
	elseif(year%4==0)
          
                printf("\n Given year is leap year%d",year);
          }
          else
                printf("\n given year is not a leap year %d",year);
}  
