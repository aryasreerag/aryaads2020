 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 #include<limits.h>

 #define CAPACITY 1000


 struct stack
 {
    int data;
    struct stack *next;
 } *top;

 int size=0;


 void push(int element);
 int pop();

 void main()
 {
   int choice,data;
    clrscr();
    while(1)
    {

    printf("___________________________\n");
    printf("STACK IMPLIMENTATION PROGRAM");
    printf("\n__________________________\n");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.size\n");
    printf("4.Exit\n");
    printf("_______________________________");
    printf("Enter your choice: ");
    scanf("%d",&choice);

 switch(choice)
     {
       case 1:
	   printf("Enter data to push into stack");
	   scanf("%d",&data);

	   push(data);
	   break;
      case 2:
	   data=pop();

	   if(data!=INT_MIN)
	     printf("Data=>%d\n",data);
	   break;
     case 3:
	   printf("stack size:%d\n",size);
	   break;
     case 4:
	   printf("Exiting from app...\n");

	   break;
     default:
	   printf("invalid choice,please try again.\n");

	   }
	   printf("\n\n");
	   }

}
     void push(int element)
      {

      struct stack * newNode =(struct stack *)malloc(sizeof(struct stack));
      if (size>=CAPACITY)
      {
       printf("stack overflow,can't add more element to stack.\n");
       return;
       }

       newNode->data=element;


       newNode->next=top;


       top=newNode;

       size++;
       printf("data pushed to stack.\n");
       }

      int pop()
       {
	 int data = 0;
	 struct stack * topNode;


	 if(size < || !top)
	 {
	   printf("stack is empty.\n");
	    return INT_MIN;
	   }

	   topNode=top;
	   data=top->data;
	   top=top->next;
	   free(topNode);
	   size--;
	   return data;
	   }


