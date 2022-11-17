#include <stdio.h>
#define MAX 100
int stack[MAX],top=-1;
void push(int item)
{
    if(top==MAX-1)
        printf("\nStack Overflow");
    else if(top==-1)
        stack[++top]=item;
    else
    {
        int tempStack[MAX],tempTop=-1;
        while(item>stack[top]&&top!=-1)
        {
            int x=stack[top--];
            tempStack[++tempTop]=x;
        }
        stack[++top]=item;
        while(tempTop>=0)
        {
            int x=tempStack[tempTop--];
            stack[++top]=x;
        }
    }    
}
void pop()
{
    int x;
    if(top==-1)
        printf("\nStack empty.");
    else
    {
        x=stack[top--];
        printf("\nDeleted : %d",x);
    }    
}
void display()
{
    if(top==-1)
        printf("\nStack empty!!\n");
    else
    {
        printf("\n");
        for(int i=0;i<=top;i++)
        {
            printf("%d\n",stack[i]);
        }
    }    
}
int main()
{
    int op,element;
    do
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display stack.");
        printf("\n4.Exit");
        printf("\n\nChoose operation : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                printf("\nEnter element to insert : ");
                scanf("%d",&element);
                push(element);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;    
        }
    }while(op<4);
   printf("enter a valid option\n");
}
