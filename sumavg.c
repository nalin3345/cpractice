#include<stdio.h>
 #include<stdlib.h>
 void main()
 {
     const int maxinput=10;
     double number,avg,sum=0.0;
     int i;
     system("clear");
     for(i=1;i<=maxinput;++i)
     {
        printf("\n %d Enter a number: ",i);
scanf("%lf",&number);
if(number<0.0)
{
       goto jump:;
 }
 sum+=number;
}
jump:
avg=sum/(i-1);
printf("\n sum=%.2f\n",sum);
printf("\n average= %.2f", avg);
}
