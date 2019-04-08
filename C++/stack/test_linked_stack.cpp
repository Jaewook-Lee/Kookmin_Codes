#include <iostream>
#include "linked_stack.h"
using namespace std;

int main()
{
    LinkedStack stack;
    stack.createStack();
    stack.traverse();

    for (int i=1; i<6; i++)
    {
        stack.push(i);
    }
    stack.traverse();
    stack.search(0);
    stack.search(3);

    for (int i=0; i<5; i++)
    {
        stack.pop();
    }
    stack.pop();
}