
//  Write a c program accept n number from user and display that number

#include<stdio.h>

void Display(int iValue)
{
  int iCnt=0;
   
  if(iValue<0)
  {
   iValue=-iValue;   //  This is updator
  }
  
  for(iCnt=1;iCnt<=iValue;iCnt++)
  {
   printf("%d\n",iCnt);
  }
}

int main()
{
 int iNo=0;
 
 printf("Enter Number : ");
 scanf("%d",&iNo);
 
 Display(iNo);
 
 return 0;
}
