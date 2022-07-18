
// Write a c program Accept number from user and display summation of upto that number

#include<stdio.h>


int Summation(int iValue)
{

   if(iValue<0)
   {
    iValue=-iValue;
   }
   
   int iCnt=0;
   int iSum=0;
   for(iCnt=1;iCnt<=iValue;iCnt++)
   {
    iSum=iSum+iCnt;
   }
  return iSum;  
}


int main()
{
 int iNo=0;
 int iRet=0;
 printf("Enter Number : ");
 scanf("%d",&iNo);
 
 iRet=Summation(iNo);
 
 printf("Addition is %d : \n",iRet);
 return 0;
}
