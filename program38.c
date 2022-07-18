#include<stdio.h>

void DisplayF(int iNo)
{
   int iCnt=0;
   
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
    printf("%d\t",iCnt);
   }
   
  printf("\n");
}

void DisplayB(int iNo)
{
  int iCnt=0;
  
  for(iCnt=iNo;iCnt>=1;iCnt--)
  {
   printf("%d\t",iCnt);
  }
  
  printf("\n");
}



int main()
{
 int iValue=0;
 
 printf("Enter A Number : ");
 scanf("%d",&iValue);
 
 printf("Forward Number is : ");
 DisplayF(iValue);
 
 printf("Backward Number is :");
 DisplayB(iValue);
  
 return 0;
}
