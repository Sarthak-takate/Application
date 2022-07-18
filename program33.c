
// Write A c program Accept a  number from user and check whether than number is perfect or not 

#include<stdio.h>
#include<stdbool.h>

int factorSum(int iNo)
{
  if(iNo<0)
  {
   iNo=-iNo;
  }
  
  int iCnt=0,iSum=0;
  
  for(iCnt=1;iCnt<=(iNo/2);iCnt++)
  {
    if(iNo%iCnt==0)
    {
     iSum=iSum+iCnt;
    }
  }
  
  return iSum;

}


bool chkPerfect(int iNo)
{
   int iAns=0;
   
   iAns=factorSum(iNo);
   
   if(iAns==iNo)
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
   printf("Given Number is Perfect Number \n");
  }
  else
  {
   printf("Given Number is Not a Prime Number \n");
  }

 return 0;
}
