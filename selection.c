#include<stdio.h>
void selection(int a[],int n)
{
 int i,j,temp,pos;
 for(i=0;i<n-1;i++)
 {
  pos=i;
  for(j=i+1;j<n;j++)
  {
   if(a[j]<a[pos])
   {
    pos=j;
   }
  }
  if(pos!=i)
   {
    temp=a[i];
    a[i]=a[pos];
    a[pos]=temp;
   }
  }

}
 void main()
{
 int a[25],n,i;
 printf("enter the size");
 scanf("%d",&n);
 printf("enter the array");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 selection(a,n);
printf("the sorted array: ");
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
}
}
 
