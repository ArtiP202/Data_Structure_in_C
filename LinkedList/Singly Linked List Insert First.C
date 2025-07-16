#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
};

void Insert_First(struct Node **First,int No)
{
    struct Node *NewN=NULL;

    NewN=(struct Node*)malloc(sizeof(struct Node));

    NewN -> Data = No;
    NewN -> Next = NULL;

    if(NULL == *First)
    {
        *First = NewN;
        printf("\n\n Inside if block of insert First");
    }
   else
    {
      NewN -> Next = *First;
      *First = NewN;
      printf("\n\n Inside else block of insert first");
    }
    printf("\n %d Element inserted successfully",No);
    return;
}

void Display_LL(struct Node *First)
{
    if(NULL == First)
    {
        printf("\n Given Linked List is already Empty.. => \n\t");
    }
     else
    {
        printf("\n Element in given Linked List are => \n\t");

        while(First != NULL)
        {
            printf(" |%d|-> ",First -> Data);
            First = First -> Next;
        }
        printf(" NULL ");
    }
    return;
}

int main()
{
    int Num = 21;
    struct Node*Head = NULL;

    Display_LL(Head);

    getch();

    Insert_First(&Head,Num);
    Insert_First(&Head,54);
    Insert_First(&Head,87);
    Insert_First(&Head,30);

    getch();
    system("cls");
     Display_LL(Head);

     getch();
     return 0;
}
