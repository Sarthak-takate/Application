#include<stdio.h>

///////////////////////////////////////////////////////////
//  Function Name : Addition
//  Decription    : used to perform addition of two number 
//  Input         : integer  integer 
//  OutPut        : integer
//  Date          : 05/07/2022 
//  Author        : Sarthak Shivaji Takate
///////////////////////////////////////////////////////////

int Addition(int iValue1,int iValue2)
{
  int iAns=0;
  
  iAns=iValue1+iValue2;
  
  return iAns;
}


///////////////////////////////////////////////////////////
// Write a C program to perform addition of two number 
///////////////////////////////////////////////////////////

int main()
{

  int iNo1=0;
  int iNo2=0;
  int iRet=0;
  
  printf("Enter Two Number : \n");
  scanf("%d",&iNo1);
  scanf("%d",&iNo2);
  
  iRet=Addition(iNo1,iNo2);
  
  printf("Addition of two number is : %d\n",iRet);

  return 0;
  
}

//////////////////////////////////////////////////////////////
//
//   Input  : 10   20
//   Output : 30
//
//////////////////////////////////////////////////////////////
