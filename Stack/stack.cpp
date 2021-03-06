#include <iostream>
#include "stack.h"

void push( int num, elem **top ){
    
    elem *curr = new elem;//создаем переменную типа elem
    
    curr->num = num;//копируем вводимую переменную в curr
    
    if( *top == NULL){ //если стек нулевой, то предыдущего элемента нету
        curr->prev = NULL;
    }
    else{//если нет, то записываем в прошлые вершину
        curr->prev = *top;
    }
    *top = curr;//и выводим вершину обратно
}
int pop( elem **top ){
    //    int tmp = (**top).num;
    int tmp = (*top)->num;
    if ( *top == NULL ){
        return -1;
    }
    elem *tmp_top = *top;
    *top = (**top).prev;
    delete tmp_top;
    return tmp;
}
void output(elem *top){
    while (top != NULL){
        cout << top->num << endl;
        top = top->prev;
    }
}
