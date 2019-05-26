#include <iostream>
#include <string>
#include "BinaryNode.hpp"

using std::cout;
using std::endl;

int main(){
   BinaryNode<int> *b = new BinaryNode<int>(10);
   b->setLeft(new BinaryNode<int>(9));
   b->setRight(new BinaryNode<int>(11));

   cout << "root: " << b->getData() << endl;
   cout << "left child: " << b->getLeft()->getData() << endl;
   cout << "right child: " << b->getRight()->getData() << endl;

   delete b;

   return 0;
}
