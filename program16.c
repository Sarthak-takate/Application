
// Write a program to print Hello 5 times on screen

#include<stdio.h>

void Display(int iValue)
{

 if(iValue<0)
 {
  printf("Please Enter Positive Number\n");
 }
 int iCnt=0;
 
 for(iCnt=0;iCnt<iValue;iCnt++)
 {
   printf("Hello\n");
 }
}


int main()
{
 int iNo=0;
 
 printf("Enter The Number : ");
 scanf("%d",&iNo);
 
 Display(iNo);
 
 return 0;
}

