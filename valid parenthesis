bool isValid(char* s) {
    int length=strlen(s);
 char stack[length];
 int top=-1,i;
for(int i=0;i<length;i++)
{
    char c=s[i];
    if(c=='(' || c=='{' || c=='[')
    {
        stack[++top]=c;
    }
    else
    {
        if(top==-1)
        {
           return false;
        }
        char topC=stack[top];
        if((c==')' && topC=='(') || (c=='}' && topC=='{') || (c==']' && topC=='[') )
        {
            top--;
        }
        else
        {
            return false;
        }
    }
}
 return top==-1;
}
