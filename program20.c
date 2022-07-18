
// Write a c program Accept N number from user and display N number on screen

#include<stdio.h>

void Display(int iValue)
{
 int iCnt=0;
 
 for(iCnt=1;iCnt<=iValue;iCnt++)
 {
   printf("%d\n",iCnt);
 }
}


int main()
{
 int iNo=0;
 
 printf("Enter N Number : ");
 scanf("%d",&iNo);
 
 Display(iNo);

 return 0;
}
