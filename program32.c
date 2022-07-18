
// Write a c program to accept a number from user and display sum of Factor of that number 

// Input  : 10 
// Output : 8

// Input  : 20
// Output : 22 (Addition of factor )

#include<stdio.h>

void DisplaySum(int iNo)
{
   if(iNo<0)
   {
     iNo=-iNo;
   }
   
   int iCnt=0;
   int iSum=0;
   
   for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {
     if(iNo%iCnt==0)
     {
       iSum=iSum+iCnt;
     }
   }
   
   printf("%d\n",iSum);

}


int main()
{
 int iValue=0;
 
 printf("Enter A Number : ");
 scanf("%d",&iValue);
 
 DisplaySum(iValue);
 
 return 0;
}
