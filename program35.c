
// Write A C program to Accept a Number from user and check whether tha nuber is perfect or not


#include<stdio.h>
#include<stdbool.h>

int chkPerfect(int iNo)
{
  if(iNo<0)
  {
   iNo=-iNo;
  }
  
  int iCnt=0,iSum=0;
  
  for(iCnt=2;iCnt<=(iNo/2);iCnt++);
  {
   if(iNo%iCnt==0)
   {
    iSum=iSum+iCnt;
   }

  }
  
  if(iSum==iNo)
  {
   return 1;
  }
  
 else
 {
   return 0;
 }


}


int main()
{
  int iValue=0;
  int iRet=0;
  
  printf("Enter A Number : ");
  scanf("%d",&iValue);
  
  iRet=chkPerfect(iValue);
  
  if(iRet==1)
  {
   printf("Given Number is Perfect Number \n");
  }
  else
  {
   printf("Given Number is Not A Perfect Number");
  }
  
  return 0;
}
