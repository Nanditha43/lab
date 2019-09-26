#include<stdio.h>
int linear(int a[],int elt,int n)
{ 
  int i,flag=0,pos;
  for(i=0;i<n;i++)
 {
  if(a[i]==elt)
  {
   flag=1;
   pos=i;
   break;  
  }
 }
  if(flag==1)
  { 
   printf("elmt found in posn %d",pos);
  }
  else
  {
   printf("elt not found");
  }
 }
void main()
{
 int elt,i,a[25],n;
 printf("enter the limit");
 scanf("%d",&n);
 printf("enter the array");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter the elt to be searched");
 scanf("%d",&elt);
 linear(a,elt,n);
  
 }
