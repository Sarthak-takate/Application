#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNo)
{
  if(iNo<0)
  {
   iNo=-iNo;
  }
  
  bool bFlag=true;

  int iCnt=0;
  
  for(iCnt=2;iCnt<=(iNo/2);iCnt++)
  {
    if(iNo%iCnt==0)
    {
     bFlag=false;
     break;
    }
  }
  
  return bFlag;
}

int main()
{
 int iValue=0;
 bool bRet;
 
 printf("Entre A Number : ");
 scanf("%d",&iValue);
 
 bRet=checkPrime(iValue);
 
 if(bRet==true)
 {
   printf("Given Nuber is Prime Number : \n");
 } 
 else
 {
   printf("Given Number is Not a Prime Number : \n");
 }
 
 return 0;
}
