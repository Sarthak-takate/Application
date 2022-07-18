#include<stdio.h>
#include<stdbool.h>

int CountFact(int iNo)
{
  int iCnt=0;
  int iCount=0;
  
  for(iCnt=2;iCnt<=(iNo/2);iCnt++)
  {
    if(iNo%iCnt==0)
    {
     iCount++;
    }
  }
  return iCount;
}

bool checkPrime(int iNo)
{
  int iAns=0;
  
  iAns=CountFact(iNo);
  
  if(iAns==0)
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
 
 bRet=checkPrime(iValue);
 
 if(bRet==true)
 {
  printf("%d is Prime Number\n",iValue);
 } 
 else
 {
  printf("%d is not a prime number\n",iValue);
 }

 return 0;
}
