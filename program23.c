
// Write a c program accept number from user and check whether given number is even or odd

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iValue)
{
   if(iValue<0)
   {
    iValue=-iValue;
   }

   if((iValue%2)==0)
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
  
  
  printf("Enter Number : ");
  scanf("%d",&iNo);
  
  bRet=ChkEven(iNo);
  
  if(bRet==true)
  {
   printf("Given Number Is Even Number \n");
  }
  else
  {
   printf("Given Number Is Odd Number \n");
  }
  
  
  
  return 0;
}
