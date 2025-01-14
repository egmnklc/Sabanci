// This program demonstrates the dynamic stack class DynIntStack.
#include <iostream>
#include "DynIntStack.h"

using namespace std;

int main()
{
    DynIntStack stack;
    int catchVar;
    
    // Push values 5, 10, and 15 on the stack.

    for (int value = 5; value <= 15; value += 5)
    {
        cout << "Push: " << value << "\n";
        stack.push(value);
    }
    cout << endl;

    // Pop three values, then attempt a fourth pop.
    for (int k = 1; k <= 3; k++)
    {
        cout << "Pop: ";
        stack.pop(catchVar); 
        // catchVar is set to the integer value of top.
        // This usage works because we're making changes on the
        //     memory address of the catchVar.
        cout << catchVar << endl;
    }

    cout << "\nAttempting to pop again...\n";
    
    stack.pop(catchVar);
    
    return 0;
}