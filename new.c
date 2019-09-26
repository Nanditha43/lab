#include<stdio.h>
void sort(int a[],int n)
{

 int i,j,temp;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
}

int binary(int n,int a[],int elt,int pos);
void main()
{
 int elt=1,i,a[25],n,pos;
 printf("enter the limit");
 scanf("%d",&n);
 printf("enter the array");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 printf("enter the elt searched\n");

 scanf("%d",&elt);

binary(n,a,elt,pos);
}
 int binary(int n,int a[],int elt,int pos)
 {
int first,last,flag=0,mid=0,i;
sort(a,n);
first=0;
last=n;
 while(first<=last)
 {
  mid=(first+last)/2;
  
   if(a[mid]==elt)
   {

    flag=1;
    pos=mid;
    break;
   }
   else if(elt>a[mid])
   {
    first=mid+1;
   }
   else
   {
    last=mid-1;
   }
   }
}
  
