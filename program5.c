
// Write  a c program  accept two number from user and perform addition of that two number

#include<stdio.h>

int Addition(int iValue1,int iValue2)
{
  int iAns=0;

  iAns=iValue1+iValue2;

  return iAns;

}


int main()
{
  int iNo1=0;
  int iNo2=0;
  int iRet=0;

  printf("Enter First Number : ");
  scanf("%d",&iNo1);

  printf("Enter Second Number : ");
  scanf("%d",&iNo2);

  iRet=Addition(iNo1,iNo2);

  printf("Addition Of Two Number Is : %d\n",iRet);

  return 0;
}