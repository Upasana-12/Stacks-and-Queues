/*
struct StackLL
{
  int data;
  struct StackLL* next;
};
struct StackLL* main_Stack = NULL;	// The stack head to be used for operations.

struct StackLL* newElement(int data);
++++++ This function is given to you for inserting an element and it will return the address of new node. ++++++

*/
int isEmpty()
{
	return main_Stack==NULL;
}

void push(int data)
{
	struct StackLL* temp=newElement(data);
  temp->next = main_Stack;
  main_Stack=temp;
}

int pop()
{
	if(isEmpty())
      return -1;
  struct StackLL* temp=main_Stack;
  int ans=temp->data;
  main_Stack=main_Stack->next;
  temp->next=NULL;
  free(temp);
  return ans;
}
