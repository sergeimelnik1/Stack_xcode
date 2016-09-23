using namespace std;

struct elem{
    int num;
    elem *prev;
};

void push(int, elem**);
int pop(elem**);
void output(elem*);
