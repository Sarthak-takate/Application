
// Write a c program Accpet one number from user and check whether given number is odd or even


#include<stdio.h>

int Check(int iValue)
{
  if((iValue%2)==0)
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
 int iNo=0;
 int iRet=0;
 
 printf("Enter A Number : ");
 scanf("%d",&iNo);
 
 iRet=Check(iNo);
 
 if(iRet==1)
 {
  printf("Given Number Is Even\n");
 }
 else
 {
  printf("Given Number Is Odd\n");
 }

 return 0;
}
