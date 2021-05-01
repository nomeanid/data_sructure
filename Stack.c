#include <stdio.h>
#include </workspace/data_structure/src/Stack.h>
void StackInit(Stack *pstack){
	pstack->topIndex = -1; // -1 == empty;
}

int SIsEmpty(Stack * pstack){
	if(pstack->topIndex == -1){
		return TRUE;
	}else{
		return FALSE;
	}
}

void SPush(Stack * pstack, Data data){
	pstack->stackArr[++(pstack->topIndex)] = data;
}

Data SPop(Stack * pstack){
	if(SIsEmpty(pstack)){
		printf("EMPTY !");
		return -1;
	}
	return pstack->stackArr[(pstack->topIndex)--];
}

Data SPeak(Stack * pstack){
		if(SIsEmpty(pstack)){
		printf("EMPTY !");
		return -1;
	}
	return pstack->stackArr[(pstack->topIndex)];
}

int main(int argc, char* argv[]) {
	Stack stack;
	StackInit(&stack);
	
	for(Data i = 0; i<5; i++){
		SPush(&stack, i);
		printf("%d\n",SPeak(&stack));
	}
	
	printf("================\n");
	while(!SIsEmpty(&stack)){
		printf("%d \n", SPop(&stack));
	}

	
	
	return 0;
}