#include <iostream>
using namespace std;
#define N 10
struct elem{
    int num;
    elem *prev;
};
void push(int, elem**);
int pop(elem**);
void output(elem*);

int main() {
    
    
    elem *top(NULL);
    
    for(int i=0; i<N; ++i){
        push(i, &top);
    }
    output(top);
    
    pop(&top);
    
    
    return 0;
}



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
    int tmp = (**top).num;
    //    int tmp = (*top)->num;
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
////вывод верхнего элемента int
//int Top_int(elem *p)
//{ return p->Aint[p->count-1]; }
