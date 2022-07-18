//  Write a Program to Accept number from user and display its Non-factors

// Input  :    10
// Output :    3 4 6 7 8 9 

// Input  :    9
// Output :    2 4 5 6 7 8

// Input  :    17
// Output :    2 3 4 ..... 16

// Input  :    20
// Output :    3 6 7 8 ..... 19

// Input  :   -20
// Output :    3 6 7 8 ..... 19


#include<stdio.h>

void DisplayNonFactor(int iNo)
{
  if(iNo<0)
  {
   iNo=-iNo;
  }
  
  int iCnt=0;
  
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
   if(iNo%iCnt!=0)
   {
    printf("%d\n",iCnt);
   }
  }
 
}



int main()
{
 int iValue=0;
 
 printf("Enter A Number : ");
 scanf("%d",&iValue);
 
 DisplayNonFactor(iValue);
 
 return 0;
}
