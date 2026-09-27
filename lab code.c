#include <stdio.h>
#define N 1000
int main()
{

int sum=0;
int count=0;
int i;
int elements=0;
float mean;
int arr[N];


for(i=0;i<N;i++)
  {
      scanf("%d",&arr[i]);
      count++;
      if(arr[i]<0)
      {
          break;
      }
  }

  for(i=0;i<count-1;i++)
  {

          elements++;
          sum=sum+arr[i];

  }
  mean=(float)sum/(count-1);
  printf("Mean=%.2f",mean);




  return 0;
}

