#pragma once

template <typename T>
class Node{
protected:
   T data;
   Node<T> *next;
public:
   Node();
   Node(T data);
   Node(T data, Node* next);
   void setData(T data);
   void setNext(Node *next);
   T getData();
   Node* getNext();
   T &getRef();
};

template <typename T>
Node<T>::Node(){
   this->next = nullptr;
}

template <typename T>
Node<T>::Node(T data){
   this->data = data;
   this->next = nullptr;
}

template <typename T>
Node<T>::Node(T data, Node* ptr){
   this->data = data;
   this->next = ptr;
}

template <typename T>
void Node<T>::setData(T data){
   this->data = data;
}

template <typename T>
void Node<T>::setNext(Node* ptr){
   this->next = ptr;
}

template <typename T>
T Node<T>::getData(){
   return this->data;
}

template <typename T>
Node<T>* Node<T>::getNext(){
   return this->next;
}

template <typename T>
T &Node<T>::getRef(){
   return this->data;
}
