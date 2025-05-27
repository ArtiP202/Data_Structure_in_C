#include<stdio.h>
#include<conio.h>

#define MAX 5

int Stack[MAX];
int Top = 0;

    int Is_Stack_Full()
    {
        if(Top == MAX)
        {
            return 1;
        }
        return 0;
    }


   int Is_Stack_Empty()
    {
        if(Top == 0)
        {
             return 1;
        }
        return 0;
    }


    void Push(int No)
    {
        if(Is_Stack_Full())
        {
            printf("\n Stack is Already Full so we can't Insert Element.... ");
        }
        else
        {
            Stack[Top] = No;
            Top++;
        }
        return;
    }


   void Pop()
    {
        if(Is_Stack_Empty())
        {
            printf("\n Stack is Already Empty so we can't Delete Element.... ");
        }
        else
        {
            printf("\n Deleted Element from Stack  is => %d ",Stack[Top-1]);
            Stack[Top-1]=0;
            Top--;
        }
        return;
    }


   void Display_Stack()
    {
         if(Is_Stack_Empty())
        {
            printf("\n Stack is Already Empty so we can't Delete Element.... ");
        }
        else
        {
            int i=0;
            printf("\n Current Element of Stack is => ");

            for(i=Top-1;i>=0;i--)
            {
              printf("\t\t |%4d|\n",Stack[i]);
            }
        }
    }


   int Count_Stack_Element()
    {
        return Top;
    }


    int Search_Stack_Element(int No)
    {
        if(Is_Stack_Empty())
        {
            printf("\n Stack is Already Empty we can't Search any Element...");
        }
        else
        {
            int Cnt=0;

            while(Cnt < Top)
            {
                if(Stack[Cnt] == No)
                {
                    return Cnt+1;
                }
                Cnt++;
            }
        }
        return -1;
    }


int main()
    {
      int ret=0;

      Push(54);
      Push(15);
      Push(90);

      getch();
      Display_Stack();

      getche();
      printf("\n \n Number of Element in Stack are =%d \n",Count_Stack_Element());

      Pop();
      Pop();
      Pop();
      Pop();
      getche();

      ret = Search_Stack_Element(54);

      if(ret < 0)
      {
          printf("\n Number Not Found ...");
      }
      else
      {
         printf("\n Given Number is Found at Location %d ",ret);
      }

      printf("\n \n Number of Element in Stack are => %d ",Count_Stack_Element());
      Display_Stack();

      Push(69);
      Push(76);
      Push(410);
      Push(9832);

      Display_Stack();

      ret = Search_Stack_Element(70);

      if(ret < 0)
      {
          printf("\n Number Not Found ...");
      }
      else
      {
         printf("\n Given Number is Found at Location %d \n",ret);
      }
       printf("\n\n Number of Element in Stack are => %d \n ",Count_Stack_Element());

       getch();
       return 0;
    }
