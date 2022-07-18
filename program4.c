
//  Write a c program accept two numnber from user and perform addition of that two number with good variable name

#include<stdio.h>

int main()
{
  int iNo1=0;
  int iNo2=0;
  int iNo3=0;

  printf("Enter First Number : ");
  scanf("%d",&iNo1);

  printf("Enter Second Number : ");
  scanf("%d",&iNo2);

  iNo3=iNo1+iNo2;

  printf("Addition Of Two Number Is : %d\n",iNo3);

  return 0;
}