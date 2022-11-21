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
}
