#include<stdio.h>

void DisplayFactCount(int iNo)
{
 if(iNo<0)
 {
  iNo=-iNo;
 }
 
 int iCnt=0;
 int iFactCnt=0;
 
 for(iCnt=1;iCnt<=(iNo/2);iCnt++)
 {
  if(iNo%iCnt==0)
  {
     iFactCnt=iFactCnt+1;
  }
 }
 
 printf("Factor Count is : %d\n",iCount);
 
}

int main()
{
  int iValue=0;
  
  printf("Enter A Number : ");
  scanf("%d",&iValue);
  
  DisplayFactCount(iValue);

  return 0;
}
