#include<stdio.h>

int Addition(int, int);

//////////////////////////////////////////////////////////
//
//   Write a c program to perform addition of two number 
//
/////////////////////////////////////////////////////////

int main()
{

  int iNo1=0,iNo2=0,iRet=0;
  
  printf("Enter Two Number : \n");
  
  scanf("%d",&iNo1);
  scanf("%d",&iNo2);
  
  iRet=Addition(iNo1,iNo2);
  
  printf("Addition Of Two Number Is : %d\n",iRet);

 return 0;
}


/////////////////////////////////////////////////////////
//
//  Input : 40       80 
// Output : 120
//
/////////////////////////////////////////////////////////
