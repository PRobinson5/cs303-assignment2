#include "stack.h"

Stack::Stack() {
	container = {};
};

bool Stack::empty() {
	return (0 == container.size());
}

void Stack::push(int data) {
	container.push_back(data);
}

void Stack::pop() {
	container.pop_back();
}

int Stack::top() {
	return container.back();
}

int Stack::avg() {
	int avg = 0;
	for (int i = 0; i < container.size(); i++)
		avg += container[i];
	avg = avg / container.size();
	return avg;
}