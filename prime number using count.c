#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
  int n,count=1,i;
  printf("Enter the value than you want to know which is prime or not");
  scanf("%d",&n);
  clock_t start,end;
  start=clock();
  if(n<=1)
  {
      count=0;
  }
  for(i=2;i<=sqrt(n);i++)
  {
      if(n%i==0)
      {
          count=0;
          break;
      }
  }
  end=clock();

  if(count==1)
  {
      printf("YES, Prime number\n");
  }
  else
  {
      printf("NOT a prime number\n");

  }

  double total_time=(double)(end-start)/CLOCKS_PER_SEC;
  printf("Total time take=%.5lf\n",total_time);






    return 0;
}
