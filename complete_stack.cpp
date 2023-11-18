#include <iostream>
#include <math.h>
using namespace std;
class stack
{
    int top;
    int* arr;
    int size;
public:
    stack(int val)
    {
        size=val;
        arr=new int[val];
        top=-1;
    }
    void push(int key)
    {
        if(top==size-1)
        {
            cout<<"Stack overflow";
            return;
        }
        top++;
        arr[top]=key;

    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack underflow.";
            return;
        }
        top--;
    }
    int TOP()
    {
        if(top==-1)
        {
            cout<<"stack empty";
            return -1;
        }
        return arr[top];
    }
    bool empt()
    {
        return top==-1;
    }

};
int prefix_evaluation(string s,stack S)
{
    for(int i=s.length()-1; i>=0; i--)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            S.push(s[i]-'0');
        }
        else
        {
            int opr1=S.TOP();
            S.pop();
            int opr2=S.TOP();
            S.pop();
            switch(s[i])
            {
            case '+':
                S.push(opr1+opr2);
                break;

            case '-':
                S.push(opr1-opr2);
                break;

            case '*':
                S.push(opr1*opr2);
                break;

            case '^':
                S.push(pow(opr1,opr2));
                break;

            case '/':
                S.push(opr1/opr2);
                break;
            }

        }
    }
    return S.TOP();
}









int postfix_evaluation(string s,stack S)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            S.push(s[i]-'0');
        }
        else
        {
            int opr2=S.TOP();
            S.pop();
            int opr1=S.TOP();
            S.pop();
            switch(s[i])
            {
            case '+':
                S.push(opr1+opr2);
                break;

            case '-':
                S.push(opr1-opr2);
                break;

            case '*':
                S.push(opr1*opr2);
                break;

            case '^':
                S.push(pow(opr1,opr2));
                break;

            case '/':
                S.push(opr1/opr2);
                break;
            }

        }
    }
    return S.TOP();
}
int prec(char c)
{
    if(c=='^')
    {
        return 3;

    }
    if(c=='*' || c=='/')
    {
        return 2;
    }
    if(c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infix_to_postfix(string s,stack st)
{
    string res;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='(')
        {
            res+=s[i];
        }
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')
    {
        st.push(s[i]);
        }
        if(s[i]==')')
    {
        while(st.TOP()!='(' && !st.empt())
            {
                res+=st.TOP();
                st.pop();


            }
            if(!st.empt())
            {
                st.pop();
            }
        }if(!st.empt() && prec(st.TOP()) > prec(s[i])){
        res+=st.TOP();
        st.pop();
        }st.push(s[i];)



    }while(!st.empt()){
    res+=st.TOP();
    st.pop();
    }
    return res;
}















int main()
{
    stack S(20);
    cout<<prefix_evaluation("-+7*45+20",S);
}






















