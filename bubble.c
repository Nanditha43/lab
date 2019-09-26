#include<stdio.h>
void bubble(int a[],int n)
{
 int i,j,temp;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-1-i;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];	
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 printf("the sorted array is :\n ");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
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
 bubble(a,n);
 }
 
