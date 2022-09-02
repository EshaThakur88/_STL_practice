#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    Stack:
    ->Works on LIFO concept-> Last In first Out.
    ->We can access size and top element of stack.
    ->Three operations-> *push *pop *top.
    */
    stack<int> s;
    s.push(6);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
