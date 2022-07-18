  
  //  Write a c program to print Hello 5 times on screen
  
  #include<stdio.h>
  
  void Display(int iValue)
  {
    int iCnt=0;
    
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
      printf("Hello\n");
    }
  
  }
  
  
  int main()
  {
    int iNo=0;
    
    printf("Enter The Number : \n");
    scanf("%d",&iNo);
    
    Display(iNo);
    
    return 0;
  }
