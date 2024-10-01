#include "singleLinkedList.h"
#include "stack.h"
#include <iostream>

using namespace std;

int main() {
	int prompt;
	cout << "Would you like to work with a linked list(1) or a stack (2)?\n" << endl;
	cin >> prompt;
	if (prompt == 1) {
		SingleLinkedList<int> linkedList = SingleLinkedList<int>(); //example locked to int but class can use any data type
		prompt = 1;
		while (prompt == 1) {
			int action;
			cout << "\nWhich action would you like to do:\n1.Push Front\n2.Push Back\n3.Pop Front\n4.Pop Back\n5.Return Front\n6.Return Back\n7.Is Empty\n8.Insert\n9.Remove\n10.Find\n11.Quit\n" << endl;
			cin >> action;
			if (action == 1) {
				int number;
				cout << "\nData to add: ";
				cin >> number;
				linkedList.push_front(number);
			}
			else if (action == 2) {
				int number;
				cout << "\nData to add: ";
				cin >> number;
				linkedList.push_back(number);
			}
			else if (action == 3) {
				cout << "\nData removed: " << linkedList.pop_front() << endl;
			}
			else if (action == 4) {
				cout << "\nData removed: " << linkedList.pop_back() << endl;
			}
			else if (action == 5) {
				cout << "\nData at front: " << linkedList.front() << endl;
			}
			else if (action == 6) {
				cout << "\nData at back: " << linkedList.back() << endl;
			}
			else if (action == 7) {
				if (linkedList.empty())
					cout << "\nList is empty." << endl;
				else
					cout << "\nList is not empty." << endl;
			}
			else if (action == 8) {
				int number;
				size_t pos;
				cout << "\nWhere do you want to insert the data: ";
				cin >> pos;
				cout << "\nWhat data do you want to insert: ";
				cin >> number;
				linkedList.insert(pos, number);
			}
			else if (action == 9) {
				size_t pos;
				cout << "\nAt what index do you want to remove data: ";
				cin >> pos;
				if (linkedList.remove(pos))
					cout << "\nData successfully removed." << endl;
				else
					cout << "\nData failed to be removed." << endl;
			}
			else if (action == 10) {
				int number;
				cout << "\nWhat data would you like to located: ";
				cin >> number;
				cout << "\nData found at " << linkedList.find(number) << endl;
			}
			else if (action == 11) {
				prompt = 0;
			}
			else {
				cout << "\nInvalid Option." << endl;
			}
		}
	}
	else if (prompt == 2) {
		Stack intStack;
		prompt = 1;
		while (prompt == 1) {
			int action;
			cout << "\nWhich action would you like to do:\n1.Is Empty\n2.Insert\n3.Remove\n4.Return Top\n5.Average\n6.Quit\n" << endl;
			cin >> action;
			if (action == 1) {
				if (intStack.empty())
					cout << "\nStack is empty." << endl;
				else
					cout << "\nStack is not empty." << endl;
			}
			else if (action == 2) {
				int number;
				cout << "\nWhat number would you like to add: ";
				cin >> number;
				intStack.push(number);
			}
			else if (action == 3) {
				cout << "\nNumber removed: " << intStack.top() << endl;
				intStack.pop();
			}
			else if (action == 4) {
				cout << "\nTop number: " << intStack.top() << endl;
			}
			else if (action == 5) {
				cout << "\nAverage of stack: " << intStack.avg() << endl;
			}
			else if (action == 6) {
				prompt = 0;
			}
			else {
				cout << "\nInvalid Option." << endl;
			}
		}
	}
}