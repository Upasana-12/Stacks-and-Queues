/*
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem */

bool arePair(const char opening, const char closing)
{
    if(opening == '(' && closing == ')') return true;
    else if(opening == '{' && closing == '}') return true;
    else if(opening == '[' && closing == ']') return true;
    return false;
}
int Solution::isValid(string A) {
    stack<char> s;
    int i=0;
    for(i=0;i<A.length();i++)
    {
        if(A[i]=='(' || A[i]=='{' || A[i]=='[')
        {
            s.push(A[i]);
            continue;
        }
        
        if(A[i]==')')
        {
            if(s.empty())
            return 0;
            else
            {
                if(s.top()=='(')
                s.pop();
                else
                return 0;
            }
        }
        
      if(A[i]=='}')
        {
            if(s.empty())
            return 0;
            else
            {
                if(s.top()=='{')
                s.pop();
                else
                return 0;
            }
        }
        
          if(A[i]==']')
         {
            if(s.empty())
            return 0;
            else
            {
                if(s.top()=='[')
                s.pop();
                else
                return 0;
            }
        }
       
        
        /*
         else if (A[i]==')' || A[i]=='}' || A[i]==']')
        {
            if(s.empty() || !arePair(s.top(), A[i]))
                return 0;
            else 
                s.pop();
        }
        else
            return 0;
            */
        
    }
    if(s.empty())
    return 1;
    else
    return 0;
}
