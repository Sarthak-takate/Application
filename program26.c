
/*
  0 to 35    Fail
 35 to 50    Pass class
 50 to 60    second class
 60 to 70    First Class
 70 to 100   First class with Distinction
   
*/

#include<stdio.h>


void DisplayClass(float fMarck)
{
 if(fMarck>0 && fMarck<35)
 {
   printf("You Are Fail\n");
 }
 else if(fMarck>=35 && fMarck<50)
 {
  printf("Pass Class\n");
 }
  else if(fMarck>=50 && fMarck<60)
  {
   printf("Second Class\n");
  }
  else if(fMarck>=60 && fMarck<70)
  {
   printf("First Class\n");
  }
  else if(fMarck>=70 && fMarck<=100)
  {
   printf("First Class With Distiction\n");
  }
  else
  {
   printf("Invalid Marck\n");
  }
 
}



int main()
{
  float fValue=0;
  
  printf("Enter a Marck : ");
  scanf("%f",&fValue);
  
  DisplayClass(fValue);

  return 0;
}
