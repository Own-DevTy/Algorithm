#include<assert.h>

class Stack{ //int 
public:
	Stack(int size = 100); //limit => 100
	~Stack();
	
	void push(int elem);
	int top();
	void pop();
	int isEmpty();
private:
	int* stack;
	int topIdx;
	int size;
}

Stack::Stack(int size){
	static_assert(size > 100, "Stack size <= 100");
	this->size = size;
	stack = new int[size];
	topIdx = -1;
}
Stack::~Stack(){
	delete[] stack;
	stack = nullptr;
}
void Stack::push(int elem){
	assert(topIdx <= size);
	stack[++topIdx] = elem;
}
int Stack::top(){
	static_assert(topIdx == -1, "Stack is empty");
	return stack[topIdx];
}
void Stack::pop(){
	static_assert(topIdx == -1, "no elem to pop");
	topIdx--;
}
int Stack::isEmpty(){
	topIdx != -1 ? return 0 : return 1;
}
