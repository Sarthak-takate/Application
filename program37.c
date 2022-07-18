#include<stdio.h>
#include<stdbool.h>

bool chkPerfect(int iNo)
{
  if(iNo<0)
  {
   iNo=-iNo;
  }
  int iCnt=0;
  int iSum=0;
  
  for(iCnt=(iNo/2);(iCnt>=1)&&(iSum<=iNo);iCnt--)
  {
   if((iNo%iCnt)==0)
   {
    iSum=iSum+iCnt;
   }
  }
  if(iSum==iNo)
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
 int iValue=0;
 bool bRet;
 
 printf("Enter A Number : ");
 scanf("%d",&iValue);
 
 bRet=chkPerfect(iValue);

 if(bRet==true)
 {
  printf("Given Number is Perfect Number\n");
 } 
 else
 {
  printf("Given  Number is Not a Perfect Number\n");
 }
  
 return 0;
}
