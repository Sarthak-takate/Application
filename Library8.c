/////////////////////////////////////////////////////
//
//  Function Name : Addition 
//  Description   : used to preform addition of two number
//  Input         : integer,integer
//  Output        : integer
//  Date          : 05/07/2022
//  Author        : Sarthak Shivaji Takate
//
/////////////////////////////////////////////////////


int Addition(int iValue1,int iValue2)
{

   if(iValue1<0)
   {
      iValue1=-iValue1;
   }
   
   if(iValue2<0)
   {
      iValue2=-iValue2;
   }
   
   int iAns =0;
   
   iAns=iValue1+iValue2;
   
   return iAns;

}
