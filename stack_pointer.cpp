#include<cstdio>

struct stack{
    int data[1024];
    int top;
};
int push(struct stack *stk, int input){
    if (stk->top <= 1024){
        stk->top++;
        stk->data[stk->top] = input;
        return 0;
    }
    else{
        printf("FULL\n");
        return -1;
    }
}

int pop(struct stack *stk){
    if (stk->top != 0){
        int temp = stk->top;
        stk->top--;
        return stk->data[temp];
    }
    else{
        printf("No data\n");
        return -1;
    }
}
void init(struct stack *stk){
    stk->top = 0;
    for(int i=0;i<1024;i++){
        stk->data[i] = 0;
    }
}

int main(){
    struct stack stk;
    init(&stk);
    for(int i=0;i<5;i++){
        printf("push %d\n", i);
        push(&stk, i);
    }
    for(int i=0;i<5;i++){
        printf("pop ");
        printf("%d\n", pop(&stk));
    }
}
