#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=-1;
void PUSH(int s[],int n,int e)
{
    if(top==n-1)//Overflow condition
        printf("Stack Overflow!!!!");
    else       //Insert into stack
    {
        s[++top]=e;
        printf("Element Inserted Successfully!!");
    }
}
void POP(int s[])
{
    int x;
    if(top==-1)//Underflow condition
        printf("Stack UnderFlow!!!!");
    else
    {
        x=s[top--];
        printf("Deleted Element=%d",x);
    }
}
void display(int s[])
{
    int i;
    if(top==-1)
        printf("\nNo Elements present for display!!!");
    printf("Stack:\n");
    for(i=0;i<=top;i++)
        printf("%d\t",s[i]);
    printf("<-TOP");
}
int main()
{
    int c,n,e,s[10];
    char ch;
    printf("Enter size of stack=");
    scanf("%d",&n);
    do
    {
        printf("Press 1 for Insertion\nPress 2 for Deletion\nPress 3 for Display\nPress 4 for exit\nEnter Your Choice=");
        scanf("%d",&c);
        switch(c)
        {
            case 1:printf("Enter element for insertion=");
                   scanf("%d",&e);
                   PUSH(s,n,e);
                   break;
            case 2:POP(s);
                   break;
            case 3:display(s);
                   break;
            case 4: exit(0);
        }
        printf("\nDo you want to continue(Y/N)?=");
        scanf(" %c",&ch);
    }while(ch=='Y'||ch=='y');
    getch();
}
