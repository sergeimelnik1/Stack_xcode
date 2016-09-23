#include <iostream>
#include "stack.h"

int main() {
    
    int const N = 10;
    elem *top(NULL);
    
    for(int i=0; i<N; ++i){
        push(i, &top);
    }    
    for(int i=0; i<N; ++i){
        cout << pop(&top) << endl;
    }

    return 0;
    }
