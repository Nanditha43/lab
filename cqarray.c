#include<stdio.h>
#define max 5
int q[max];
int f=-1;
int r=-1;

void enqueue(int x)
{
  if(f==(r+1)%max)
  {
   printf("\nQueue full");
  }
  else
  {
   if(f==-1)
    f=r=0;
   else
    r=(r+1)%max;
   q[r]=x;
  }
}

void dequeue()
{
  if(f==-1)
  {
    printf("\nQueue empty");return;
  }
  else if(f==r)
  {
   printf("\nElement deleted is: %d",q[f]);
   f=-1;
   r=-1;
  }
  else
 {
   printf("\nElement deleted is: %d",q[f]);
   f=(f+1)%max;
 }
}

void display()
{
 if(f==-1)
 {
    printf("\nQueue empty");
  }
 else if(f<=r)
 {
  for(int i=f;i<=r;i++)
  {
   printf("\t%d",q[i]);
  }
 }
 else
 {
 for(int i=f;i<=max-1;i++)
  {
   printf("\t%d",q[i]);
  }
  for(int i=0;i<=r;i++)
  {
   printf("\t%d",q[i]);
  }
  
 }
}

int main(void)
{
 int x,ch;
 printf("\n\n\tMENU\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT");
 while(1)
 {
 printf("\nEnter your choice:");
 scanf("%d",&ch);
 if(ch==4)
  break;
 switch(ch)
 {
  case 1:printf("\nEnter the element:");
	 scanf("%d",&x);
	 enqueue(x);
	 break;
  case 2:dequeue();
	 break;
  case 3:display();
	 break;
  default:printf("\nInvalid choice:");
 }
 }
} 
