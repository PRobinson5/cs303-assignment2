#pragma once
#include <vector>

using namespace std;

class Stack {
private:
	vector<int> container;

public:
	Stack();

	bool empty();
	void push(int data);
	void pop();
	int top();
	int avg();

};