#include <string>
#include "LinkedList.hpp"

template <typename T>
class Queue {
protected:
	LinkedList<T> *l;

public:
	Queue();
	~Queue();
	void enqueue(T data);
	T dequeue();
	T front();
	bool isEmpty();
	T get(int pos);
	void set(T data, int pos);
	T operator[](int pos);
	int size();
	std::string toString();
};

template <typename T>
Queue<T>::Queue(){
	l = new LinkedList<T>();
}

template <typename T>
Queue<T>::~Queue(){
	delete l;
}

template <typename T>
void Queue<T>::enqueue(T data){
	l->push_back(data);
}

template <typename T>
T Queue<T>::dequeue(){
	T val = l->get(0);
	l->remove(0);
	return val;
}

template <typename T>
T Queue<T>::front(){
	return l->get(0);
}

template <typename T>
bool Queue<T>::isEmpty(){
	return l->size() == 0;
}

template <typename T>
T Queue<T>::get(int pos){
	return l->get(pos);
}

template <typename T>
void Queue<T>::set(T data, int pos){
	l->set(data, pos);
}

template <typename T>
T Queue<T>::operator[](int pos){
	return l->get(pos);
}

template <typename T>
int Queue<T>::size(){
	return l->size();
}

template <typename T>
std::string Queue<T>::toString(){
	return l->toString();
}
