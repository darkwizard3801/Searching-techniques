#include<stdio.h>
int main()
{
int a[20],i,n,x,mid,beg,end;
printf("enter the size:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
{


scanf("%d",&a[i]);
}
printf("enter the element that you want to search:");
scanf("%d",&x);
beg=0;
end=n-1;
mid=(beg+end)/2;
while (beg<=end)
{
    if(a[mid]<x)
    
        beg=mid+1;
    
    else if(a[mid]==x)
    {
        printf("the element is %d found at index %d",x,mid+1);
        break;
    }
    else
    
        end=mid-1;
        mid=(beg+end)/2;
    
}  


if(beg > end)
printf("Not found! %d isn't present in the list", x);

return 0;
}
