#pragma once
#include <string>
#include "Node.hpp"

template <typename T>
class LinkedList {
protected:
   Node<T> *head;
public:
   LinkedList();
   ~LinkedList();
   void push_front(T data);
   void push_back(T data);
   void remove(int pos);
   void insert(T data, int pos);
   T get(int pos);
   void set(T data, int pos);
   T operator[](int pos);
   int size();
   std::string toString();
};

template <typename T>
LinkedList<T>::LinkedList(){
   head = nullptr;
}

template <typename T>
LinkedList<T>::~LinkedList(){
   if (head != nullptr){
      Node<T> *t, *t2;
      t = head->getNext();

      while (t != nullptr){
         t2 = t;
         t = t->getNext();
         delete t2;
      }

      delete head;
   }
}

template <typename T>
void LinkedList<T>::push_front(T data){
	Node<T> *n = new Node<T>(data, nullptr);

   if (head != nullptr)
      n->setNext(head);

   head = n;
}

template <typename T>
void LinkedList<T>::push_back(T data){
   Node<T> *n = new Node<T>(data);

   if (LinkedList::size() == 0){
      head = n;
   } else {
      Node<T> *t = head;

      while (t->getNext() != nullptr){
         t = t->getNext();
      }

      t->setNext(n);
   }
}

template <typename T>
void LinkedList<T>::remove(int pos){
   if (pos > size() - 1)
      return;

   Node<T> *t, *t2;

   if (pos == 0){
      t = head;
      head = head->getNext();
      delete t;
      return;
   }

   t = head;

   while (pos > 0){
      pos--;
      t2 = t;
      t = t->getNext();
   }

   t2->setNext(t->getNext());
   delete t;
}

template <typename T>
void LinkedList<T>::insert(T data, int pos){
   Node<T> *n = new Node<int>(data);

   if (LinkedList::size() == 0){
      n->setNext(head);
      head = n;
   } else {
      Node<T> *t = head;
      int counter = 0;

      while (counter < pos){
         t = t->getNext();
      }

      n->setNext(t->getNext());
      t->setNext(n);
   }
}

template <typename T>
T LinkedList<T>::get(int pos){
   Node<T> *t = head;
   int counter = 0;

   while (counter != pos){
      t = t->getNext();
      counter++;
   }

   return t->getData();
}

template <typename T>
void LinkedList<T>::set(T data, int pos){
   Node<T>* t = head;
   int counter = 0;

   while (counter != pos){
      t = t->getNext();
      counter++;
   }

   t->setData(data);
}

template <typename T>
T LinkedList<T>::operator[](int pos){
   return this->get(pos);
}

template <typename T>
int LinkedList<T>::size(){
	int counter = 0;
	Node<T> *t = head;

	while (t != nullptr){
		t = t->getNext();
		counter++;
	}

	return counter;
}

template <typename T>
std::string LinkedList<T>::toString(){
  std::string s = "";
  Node<T> *t = head;

  while (t != nullptr){
    s += std::to_string(t->getData()) + "->";
    t = t->getNext();
  }
  s += "NULL\n";
  return s;
}
