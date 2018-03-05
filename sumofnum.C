#include<stdio.h>
int main()
{
int n,i,a[10],sum=0;
printf("enter the no of terms:");
scanf("%d",&n);
printf("enter the number:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("the sum of the number is %d",sum);
return 0;
}
