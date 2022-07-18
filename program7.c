#include<stdio.h>

int Addition(int,int);

/////////////////////////////////////////////////////////
//
// Write a c program to perform addition of twom number
//
/////////////////////////////////////////////////////////

int main()
{
  
  int iNo1=0;
  int iNo2=0;
  int iRet=0;
  
  printf("Enter Two Number\n");
  scanf("%d",&iNo1);
  scanf("%d",&iNo2);
  
  iRet=Addition(iNo1,iNo2);
  
  printf("Addition Of Two Number Is : %d\n",iRet);
  
  return 0;
}

//////////////////////////////////////////////////////////
//
//   Input :  10    50
//  OutPut :  60
//
//////////////////////////////////////////////////////////


/*
Command :

gcc program7.c Library7.c -o myexe

*/
