write a c program to find  highest marks among six subjects,average marks,

 #include<stdio.h>
 #include<stdlib.h>
 void main()
 {
  int san,eng,mat1,mat2,phy,chem,tot;
  float avg;
  system("clear");
  printf("\n enter sanskrit subject marks\n");
  scanf("%d",&san);
  printf("\n enter english subject marks\n");
  scanf("%d",&eng);
  printf("\n enter maths1 subject marks\n");
  scanf("%d",&mat1);
  printf("\n enter maths2 subject marks\n");
  scanf("%d",&mat2);
  printf("\n enter physics subject marks\n");
  scanf("%d",&phy);
  printf("\n enter chemistry subject marks\n");
  scanf("%d",&chem);
tot=san+eng+mat1+mat2+phy+chem;
  printf(" the six subjects total marks are%d",tot);
  avg=tot/6;
  printf("average of six subjects marks are %f",avg);
  if ((san<35)||(eng<35)||(mat1<35)||(mat2<35)||(phy<35)||(chem<35))
        printf("the student is fail in exam\n");
printf("em badha padakuu ni exam detials ani kinda unayy chuduu");
  if ((san>35)||(eng>35)||(mat1>35)||(mat2>35)||(phy>35)||(chem>35))
        printf("the student is pass in exam\n");



if(tot>900)
  printf("\n student got A grad in exam");
if(tot>800)
  printf("\n student got B grad in exam");
if(tot>700)
  printf("\n student got C grad in exam");
if(tot>600)
  printf("\n student got D grad in exam");
if(tot>500)
  printf("\n student got Egrad in exam");
if(tot<400)
  printf("\n adivindii salluu gani eka intiki poyy me nayanna tho poojaa cheyy\n");
else if (san>eng&&san>mat1&&san>mat2&&san>phy&&san>chem)
        printf("student got highest makes in sanskrit\n");
else if (eng>san&&eng>mat1&&eng>mat2&&eng>phy&&eng>chem)
        printf("student got highest makes in english\n");
else if (mat1>eng&&mat1>san&&mat1>mat2&&mat1>phy&&mat1>chem)
        printf("student got highest makes in maths1\n");
else if (mat2>eng&&mat2>mat1&&mat2>san&&mat2>phy&&mat2>chem)
        printf("student got highest makes in maths2\n");
else if (phy>eng&&phy>mat1&&phy>mat2&&phy>san&&phy>chem)
        printf("student got highest makes in physics\n");
else if (chem>eng&&chem>mat1&&chem>mat2&&chem>phy&&chem>san)
        printf("student got highest makes in chemistry\n");
 else if (san<35)
        printf("student fail in sanskrit");
 else if (eng<35)
        printf("student fail in english");
 else if(mat1<35)
        printf("student fail in maths1");
 else if(mat2<35)
        printf("student fail in maths2");
 else if(phy<35)
        printf("student fail in physics");
 else if(chem<35)
        printf("student fail in chemistry");


printf("happy na broo");

 }  
