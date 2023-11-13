#include<stdio.h>
int main()
{
int a[20],i,n,x;
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
{


scanf("%d",&a[i]);
}
printf("enter the element that you want to search:");
scanf("%d",&x);
for(i=0;i<=n;i++)
{
    if(a[i]==x)
    {
        printf("item found at index :%d",i+1);
        break;
    }
    
}
if(i>n)
{
    printf("eleenet not found");
}
return 0;
}