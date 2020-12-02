
## C++ program to implement basic stack operations 

```
#include<bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack
{
    int top;
public:
    int a[MAX];    //Maximum size of Stack

    Stack()  { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (MAX-1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout<<x <<" pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

// Driver program to test above functions
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.pop() << " Popped from stack\n";

    return 0;
}
```



## reverse list
```
void printreverse(Node *head)
{
    stack < Node* > s
    current = head
    while(current != NULL)
    {
        s.push(current)
        current = current->next
    }
    while( ! s.empty())
    {
        node = s.top()
        print(node->data)
        s.pop()
    }
}
```

## function to check if paranthesis are balanced 
```
bool areParanthesisBalanced(string expr) 
{
    stack < char > s 

    for i=0 to expr.size() {

        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') {
            s.push(expr[i])
            continue 
        }
        // stack can not be empty for closing bracket
        if s.empty() 
            return false
  
        switch (expr[i]) {
            case ')':  {
                x = s.top()
                s.pop()
                if (x=='{' || x=='[') 
                    return false
                break 
            }
            case '}':  {
                x = s.top(); 
                s.pop(); 
                if (x=='(' || x=='[') 
                    return false 
                break
            }
            case ']':  {
                x = s.top(); 
                s.pop(); 
                if (x =='(' || x == '{') 
                    return false
                break
            }
        }
    }
    // Check Empty Stack 
    return (s.empty())
} 
```


## Next greater Element
void printNGE(arr, n) 
{
    stack < int > s
    s.push(arr[0])
    for i=0 to n-1 {
        if (s.empty()) {
            s.push(arr[i])
            continue
        }
        while (s.empty() == false && s.top() < arr[i]) {
            print(s.top() + "-->" + arr[i])         
            s.pop() 
        }
        s.push(arr[i])
        while (s.empty() == false) {
            print(s.top() + "-->" + -1) 
            s.pop()
        }
    }
}
