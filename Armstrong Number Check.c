#include <stdio.h>
#include <math.h>
int main()
{
  int n,count=0,digit;
  double sum=0;

  printf("Enter The Number");
  scanf("%d",&n);
  int copy1=n,copy2=n;
  while(copy1!=0)
  {

     copy1=copy1/10;
     count++;



  }
  while(copy2!=0)
  {
      digit=copy2%10;
      sum=sum+pow(digit,count);
      copy2=copy2/10;
  }
  if(sum==n)
  {
      printf("%d is an Armstrong Number\n",n);
  }
  else
  {
      printf("%d is Not an Armstrong Number\n",n);
  }




    return 0;
}
