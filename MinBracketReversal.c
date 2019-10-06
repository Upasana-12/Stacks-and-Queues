/*
Given an expression having only square brackets ‘[‘ and ‘]’. Find the minimum number of brackets reversals required to make the expression balanced. If expression cannot be made balanced, print -1 and if it is already balanced, print 0.

Sample Input 1

2
[]
][
Sample Output 1

0
2
Explanation 1

First expression is already balanced, so print 0.
Second expression requires 2 reversals (both the brackets needs to be changed as []) so prints 2.

*/
#include<string.h>
char s[1000];
int top=-1;
int isEmpty()
{
  return top==-1;
}
void push(char ch)
{
  s[++top]=ch;
}
void pop()
{
  top--;
}
int minReversal(char* exp)
{
  int size=strlen(exp);
  if(size%2)
    return -1;
	int i=0;
  for(i=0;i<strlen(exp);i++)
  {
    if(exp[i]==']' && !isEmpty())
    {
      if(s[top]=='[')
        pop();
      else
        push(exp[i]);
    }
    else
      push(exp[i]);
  }
  int l=top+1;
  int c=0;
  while(!isEmpty() && s[top]=='[')
  {
    c++;
    pop();
  }
  int ans=l/2+c%2;
  return ans;
}