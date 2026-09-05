#include <stdio.h>
int main()
{
 int n,rem,rev=0;

 printf("Enter The Number");
 scanf("%d",&n);
 int copy=n;
 while(n!=0)
 {
     rem=n%10;
     rev=rev*10+rem;
     n=n/10;

 }
     if(rev==copy)
     {
         printf("Palindrome Number\n");
     }
     else
     {
         printf("Not Palindrome Number\n");
     }



    return 0;
}
