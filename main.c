#include <stdio.h>

int main()
{
 int n;
 scanf("%d",&n);

 for(int i=1;i<=10000;i++)
 {
     if(n%i==2)
     {

         printf("%d\n", i);
     }

 }

}
