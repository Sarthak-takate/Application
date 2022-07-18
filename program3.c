
// Write a c program accept two number from user and perform addition of that two number

#include<stdio.h>

int main()
{
  int i=0;
  int j=0;
  int k=0;

  printf("Enter First Number : ");
  scanf("%d",&i);

  printf("Enter Second Number : ");
  scanf("%d",&j);

  k=i+j;

  printf("Addition of two number is : %d\n",k);

  return 0;
}