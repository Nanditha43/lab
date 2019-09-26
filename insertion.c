#include<stdio.h>
void insertion(int a[],int n)
{
 int i,j,temp;
 for(i=0;i<n;i++)
 {
  j=i;
  while(j>0&&a[j-1]>a[j])
  {
   temp=a[j];
   a[j]=a[j-1];
   a[j-1]=temp;
   j--;
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
 insertion(a,n);
printf("sorted array: ");
for(int i=0;i<n;i++)
{
 printf("%d",a[i]);
}
} 
