#include<stdio.h>
int add(int,int);
int mul(int,int);
int div(int,int);
int main()
{
int a,b;
printf("enter a,b values");
scanf("%d%d",&a,&b);
printf("%d",add(a,b));
printf("/n%d",mul(a,b);
printf("/n%d",div(a,b);
}
int add(int a,int b)
{
 return(a+b);
}
 int mul(int a,int b)
        {
        return(a*b);
        }
 int div(int a,int b)
  {
   return(a/b);
  }
      
