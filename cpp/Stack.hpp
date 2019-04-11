#pragma once
#include <string>
#include "LinkedList.hpp"

template <typename T>
class Stack {
protected:
	LinkedList<T> *l;

public:
	Stack();
	~Stack();
	void push(T data);
	T pop();
	T top();
	bool isEmpty();
	T get(int pos);
	void set(T data, int pos);
	T operator[](int pos);
	int size();
	std::string toString();
};

template <typename T>
Stack<T>::Stack(){
	l = new LinkedList<T>();
}

template <typename T>
Stack<T>::~Stack(){
	delete l;
}

template <typename T>
void Stack<T>::push(T data){
	l->push_front(data);
}

template <typename T>
T Stack<T>::pop(){
	if (l->size() == 0){
		return -1;
	} else {
		T val = l->get(0);
		l->remove(0);
		return val;
	}
}

template <typename T>
T Stack<T>::top(){
	return l->get(0);
}

template <typename T>
bool Stack<T>::isEmpty(){
	return l->size() == 0;
}

template <typename T>
T Stack<T>::get(int pos){
	if (pos >= 0 && pos <= l->size())
		return l->get(pos);
}

template <typename T>
void Stack<T>::set(T data, int pos){
	l->set(data, pos);
}

template <typename T>
T Stack<T>::operator[](int pos){
	return l->get(pos);
}

template <typename T>
int Stack<T>::size(){
	return l->size();
}

template <typename T>
std::string Stack<T>::toString(){
	return l->toString();
}
