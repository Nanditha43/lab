#include<stdio.h>
#include<stdlib.h>
void push(int stack[],int top,int MAX,int x)
{
 if(top>=MAX-1)
 {
  printf("\n stack overflow");
 }
 else
 {
  top++;
  stack[top]=x;
 }
}

 


void main(){
int MAX;
printf("\n enter the max space possile");
scanf("%d",&MAX);
int ch,top=-1,stack[MAX],x;

 while(1){
   printf("Stack Menu");
   printf("\n 1.Push  \n2.Pop  \n3.Display \n4.Exit");
   printf("Enter the choice");
   scanf("%d",&ch);
   switch(ch){
   case 1: printf("\n enter the value to be pushed");
           scanf("%d",&x);
           push(stack,top,MAX,x);
           break;
   /*case 2: pop(stack,top,x);
     break;
   case 3: display();
     break;
   case 4: exit(0);
   default:printf("\n Invaild Choice");*/
     
   }
 }
}

