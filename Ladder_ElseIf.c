#include<stdio.h>
#include<conio.h>
void main()
{
int p,c,m,b,total;
float per;
printf("Enter Subject Marks : \n");
scanf("%d %d %d %d", &p,&c,&m,&b);
total=p+c+m+b;
printf("Student Marks=%d",total);
per=total/4;
printf("Student Percentage=%f",per);
if(per>=75)
{
printf("Distinction");
}
else if(per>=60)
{
printf("First Class");
}
else if(per>=50)
{
printf("Second Class");
}
else if(per>=35)
{
printf("Pass");
}
else
{
printf("Fail");
}
}
