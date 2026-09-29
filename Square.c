#include <stdio.h>
int main()
{
 int i,t;

 scanf("%d",&t);
 for(i=0;i<t;i++)
 {
     int count=0;
     int a,b,c,d;
     scanf("%d %d %d %d",&a,&b,&c,&d);
     if(a==b && b==c&& c==d)
     {
         count=1;
     }
     if(count==1)
     {
         printf("YES\n");
     }
     if(count==0)
     {

         printf("NO\n");
     }
 }




    return 0;
}
