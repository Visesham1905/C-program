#include<stdio.h>
main()
{
  int i,fact=1,n;
  printf("\n Enter n=");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    fact=fact*i;
  }
  printf("\n fact=%d",fact);
  printf("Welcome");
}
void add()
{
  int a,b,c;
  printf("\n Enter the two number");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("\nAdd %d=",c);
}
void sub()
{
  int a,b,c;
  printf("\n Enter the two number");
  scanf("%d%d",&a,&b);
  c=a-b;
  printf("\n sub %d=",c);
}
