#include <iostream>
#include <string>
#include "Queue.hpp"

using std::cout;
using std::endl;

int main(){
   Queue<int> *q = new Queue<int>();

   cout << "made the queue" << endl;

   q->enqueue(1);
   q->enqueue(2);
   q->enqueue(3);

   cout << q->toString() << endl;

   int result = q->dequeue();
   cout << q->toString() << endl;
   cout << std::to_string(result) << endl;

   delete q;

   return 0;
}
