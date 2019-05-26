#pragma once

template <typename T>
class BinaryNode {
	protected:
		T data;
		BinaryNode<T> *left;
		BinaryNode<T> *right;

	public:
		BinaryNode();
		BinaryNode(T data);
		BinaryNode(T data, BinaryNode* left, BinaryNode* right);
		void setData(T data);
		T getData();
		BinaryNode* getLeft();
		BinaryNode* getRight();
		void setLeft(BinaryNode* left);
		void setRight(BinaryNode* right);
};

template <typename T>
BinaryNode<T>::BinaryNode(){
   this->left = nullptr;
	this->right = nullptr;
}

template <typename T>
BinaryNode<T>::BinaryNode(T data){
   this->data = data;
   this->left = nullptr;
	this->right = nullptr;
}

template <typename T>
BinaryNode<T>::BinaryNode(T data, BinaryNode* left, BinaryNode* right){
   this->data = data;
   this->left = left;
	this->right = right;
}

template <typename T>
void BinaryNode<T>::setData(T data){
   this->data = data;
}

template <typename T>
void BinaryNode<T>::setLeft(BinaryNode* left){
   this->left = left;
}

template <typename T>
void BinaryNode<T>::setRight(BinaryNode* right){
   this->right = right;
}

template <typename T>
T BinaryNode<T>::getData(){
   return this->data;
}

template <typename T>
BinaryNode<T>* BinaryNode<T>::getLeft(){
   return this->left;
}

template <typename T>
BinaryNode<T>* BinaryNode<T>::getRight(){
   return this->right;
}
