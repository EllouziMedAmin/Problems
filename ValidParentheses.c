#include<stdio.h>
#include<stdlib.h>

typedef struct stuck
{
    char data;
    struct stuck *next;
}stu;

stu* createNode(char data) {
    stu* newNode = (stu*)malloc(sizeof(stu));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to push an element onto the stack
void push(stu** top, char data) {
    stu* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
}

// Function to pop an element from the stack
char pop(stu** top) {
    if (*top == NULL) {
        printf("Stack underflow\n");
        return '\0';
    }
    stu* temp = *top;
    char popped = temp->data;
    *top = (*top)->next;
    free(temp);
    return popped;
}
int valid(char* s){
    stu* pile;
    printf("%c \n",s[0]);
    pile=createNode(s[0]);
    char *ch=s+1;
    printf("%c \n", pile->data);
    return 0;
}

int main(){
    int i=valid("hello world");
    
}