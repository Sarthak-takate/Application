
// Write a c program accept one number from user and check whether that number is disible 3 & 5 or not

#include<stdio.h>
#include<stdbool.h>

bool Check(int iValue)
{
 if((iValue%3==0)&&(iValue%5==0))
 {
   return true;
 }
 
 else
 {
   return false;
 }
 
}

int main()
{
  int iNo=0;
  bool bRet;
  
  printf("Enter a number : ");
  scanf("%d",&iNo);
  
  bRet=Check(iNo);
  
  if(bRet==true)
  {
    printf("Given Number Is Divisible 3 and 5\n");
  }
  else
  {
    printf("Given Number Is Not Divisible 3 and 5\n");
  }

 return 0;
}
