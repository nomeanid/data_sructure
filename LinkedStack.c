#include <stdio.h>
#include <stdlib.h>
#include </workspace/data_structure/src/LinkedStack.h>

void StackInit(Stack * pstack){
	pstack->head = NULL;
}
int SIsEmpty(Stack * pstack){
	if(pstack->head == NULL){
		return TRUE;
	}else{
		return FALSE;
	}
}
void SPush(Stack * pstack, Data data){
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = pstack->head;
	
	pstack->head = newnode;
}
Data SPop(Stack * pstack){
	if(SIsEmpty(pstack)){
		return -1;
	}
	Node* removeNode = pstack->head;
	Data rdata = removeNode->data;
	
	pstack->head = removeNode->next;
	
	free(removeNode);
	return rdata;
}
Data SPeak(Stack * pstack);

int main(){
	Stack stack;
	StackInit(&stack);
	
	SPush(&stack, 1);
	SPush(&stack, 2);
	SPush(&stack, 5);
	SPush(&stack, 7);
	SPush(&stack, 9);
	
	while(!SIsEmpty(&stack)){
		printf("%d\n",SPop(&stack));
	}
	
	return 0;
}