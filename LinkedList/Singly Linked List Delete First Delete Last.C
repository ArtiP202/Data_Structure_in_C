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
    struct Node *NewN = NULL;

    NewN = (struct Node*)malloc(sizeof(struct Node));

    NewN -> Data =No;
    NewN -> Next = NULL;

    if (NULL == *First)
    {
        *First = NewN;
        printf("\n Inside if block of Insert First");
    }
    else
    {
        NewN -> Next = *First;
        *First = NewN;
    }
    printf("\n %d element Inserted at First position Successfully",No);

    return;
}

void Insert_Last(struct Node **First,int No)
{
   struct Node *NewN = NULL;

   NewN = (struct Node*)malloc(sizeof(struct Node));

   NewN -> Data = No;
   NewN -> Next = NULL;;

   if(NULL = *First)
   {
       *First = NewN;
        printf("\n %d element Inserted at Last position Successfully",No);
   }
   else
   {
       struct Node *Temp = *First;

       while(Temp -> Next != NULL)
       {
           Temp = Temp -> Next;
       }
       Temp -> Next = NewN;
   }
   printf("\n %d Element Inserted at Last position Successfully",No);
   return;
}

void Display_LL(struct Node *First)
{
    if( NULL == First)
    {
       printf("\ Given Linked List is Already Empty");
    }
    else
    {
        printf("\n Element in Given Linked List are =>\n\t");

        while( First != NULL)
        {
            printf(" | %d | -> First ->  Data");
            First = First -> Next;
        }
    }
    printf("NULL");
    return;
}

void Delete_First(struct Node **First)
{
    if(NULL == *First)
    {
        printf("\n Linked List is Already Empty,can't Delete Element...");
    }
    else
    {
        struct Node *Temp = *First;

        *First = Temp -> Next;

        printf("\n Deleted First Element in Linked List is = %d",Temp->Data);

        free(temp);

    }
    return;
}
void Delete_Last(struct Node **First)
{
    if(NULL == *First)
    {
        printf("\n Linked List is Already Empty,can't Delete Element...");
    }
    else
    {
       struct Node *First;

       if(Temp -> next != NULL)
       {
           while(Temp -> Next -> Next != NULL)
           {
               Temp = Temp -> Next;
           }
       }
       printf("\n Deleted last Element in Linked list is = %d",Temp -> Next -> Data);

       free(Temp->Next);

       Temp->Next = NULL;
    }
    return;
}


