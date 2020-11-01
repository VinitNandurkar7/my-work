#include<stdio.h>

int Addition(int iNo1 , int iNo2)
{
  int iAdd = 0;
  
  iAdd = iNo1 + iNo2;
  
  return iAdd;
}

int main()
{
int iNo1 =0 , iNo2 = 0;
int iRet = 0;

printf("Enter the first number\n");
scanf("%d",&iNo1);

printf("Enter the second number\n");
scanf("%d",&iNo2);

iRet = Addition(iNo1 , iNo2);
printf("Addition of two numbers is:%d\n",iRet);

return 0;
}
