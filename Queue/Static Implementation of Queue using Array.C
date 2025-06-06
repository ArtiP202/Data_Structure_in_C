#include<stdio.h>
#include<conio.h>

#define MAX 5

int Queue[MAX];
int Rear=0;
int Front=0;

int Is_Queue_Full()
  {
    if(Rear == MAX)
    {
        return 1;
    }
    return 0;
  }

int Is_Queue_Empty()
  {
      if(Front == Rear)
      {
          return 1;
      }
      return 0;
  }

void Enqueue(int No)
  {
      if(Is_Queue_Full())
      {
          printf("\n Queue is Already Full we cant Enqueue any Element..");
      }
      else
      {
          Queue[Rear]=No;
          Rear++;

          printf("\n %d Enqueued Successfully",No);
      }
      return ;
  }

void Dequeue()
  {
      if(Is_Queue_Empty())
      {
          printf("\n Queue is Already Empty we cant Dequeue any Element..");
      }
      else
      {
          printf("\n Element Deleted is =%d",Queue[Front]);
          Queue[Front]=0;
          Front++;

      }
      return ;
  }

void Display_Queue()
{
      if(Is_Queue_Empty())
      {
          printf("\n Queue is Already Empty we cant Display any Element..");
      }
      else
      {
         int i=0;

         printf("\n Element In Queue are => \n\t\t\t");

         for(i=0;i<Rear;i++)
         {
            printf("\t |%4d|",Queue[i]);
         }
      }
      return ;
}

int Count_Queue_Element()
{
    return Rear-Front;
}

int main()
{
    Enqueue(21);
    Enqueue(53);

    printf("\n Element Count in Queue => %d",Count_Queue_Element());

    getch();

    Display_Queue();

    Dequeue();
    Dequeue();
    Dequeue();
    getch();

    Display_Queue();
    getch();

     Enqueue(123);
     Enqueue(216);
     Enqueue(244);
     Enqueue(341);
     Enqueue(658);

       printf("\n Element Count in Queue => %d",Count_Queue_Element());

       getch();

       Display_Queue();
       return 0;
}
