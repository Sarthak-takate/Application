
// Write a c program to Display 5 times Hello on screen

#include<stdio.h>

void Display(int iValue)
{

  if(iValue<0)
  {
    iValue=-iValue; 
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
