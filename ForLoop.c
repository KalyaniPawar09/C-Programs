#include<stdio.h>
#include<conio.h>
void main()
{
  int num;
  int fact=1;
  printf("Enter the number");
  scanf("\n%d",&num);
  for(int i=1;i<=num;i++)
  {
      fact=fact*i;
  }
printf("factorial=%d",fact);
getch();
}
