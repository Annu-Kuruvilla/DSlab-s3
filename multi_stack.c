#include<stdio.h>
int stack[10],top1=-1,size=10,i;
int top2=10;

void push1(int stack[])
 {
  int x;
  if(top1>=top2)
   printf("stack overflow");
  else
   {
    printf("Enter element to push to first stack:\n");
    scanf("%d",&x);
    stack[++top1]=x;
   }
 }
 void push2(int stack[])
 {
  int x;
  if(top1>=top2)
   printf("stack overflow");
  else
   {
    printf("Enter element to push to second stack:\n");
    scanf("%d",&x);
    stack[--top2]=x;
   }
 }
void pop1(int stack[])
 {
  if(top1<0)
   printf("stack underflow\n");
  else
   printf("%d\n",stack[top1--]);
 }

void pop2(int stack[])
 {
  if(top2<size-1)
   printf("stack underflow\n");
  else
   printf("%d\n",stack[top2++]);
 }
void peek1(int stack[])
{
  if(top1<0)
   printf("stack underflow\n");
  else
  for(i=top1;i>=0;i--)
   printf("%d\n",stack[i]);
}
void peek2(int stack[])
{
if(top2<size-1)
   printf("stack underflow\n");
  else
  for(i=top2;i<size;i++)
   printf("%d\n",stack[i]);
 }
int main()
{
 int flag=1;
 int option;
  while(flag)
   {
    printf("choose option from below\n 1.Push to stack 1\n 2.Push to stack 2\n 3.pop from stack1\n 4.pop from stack2\n 5.peek from stack 1\n 6. peek from stack2\n7. exit");
    scanf("%d",&option);
     switch(option)
      {
       case 1:push1(stack);
        break;
       case 2:push2(stack);
        break;
       case 3:pop1(stack);
        break;
       case 4:pop2(stack);
        break;  
      case 5: peek1(stack);
       break;
      case 6: peek2(stack);
       break; 
      case 7:flag=0;
       break;
        
      }
   }
} 
