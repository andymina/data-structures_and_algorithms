#include <iostream>
#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "Stack.h"
#include "AugStack.h"
#include "doctest.h"

// Write test cases here
TEST_CASE("STACK: Push"){
	Stack* s = new Stack();
	for (int i = 0; i < 100; i++){
		s->push(i);
		CHECK(s->get(0) == i);
	}

	delete s;
}

TEST_CASE("STACK: Top"){
	Stack* s = new Stack();
  	for (int i = 0; i < 100; i++){
  		s->push(i);
  		CHECK(s->top() == i);
  	}

  	delete s;
}

TEST_CASE("STACK: Empty"){
	Stack* s = new Stack();
	CHECK(s->empty() == true);

	s->push(1);
	CHECK(s->empty() == false);

	s->pop();
	CHECK(s->empty() == true);

	delete s;
}

TEST_CASE("STACK: Pop"){
	Stack* s = new Stack();
	CHECK(s->pop() == -1);

	s->push(1);
	s->push(2);

	CHECK(s->pop() == 2);
	CHECK(s->pop() == 1);

	delete s;
}

TEST_CASE("AUG_STACK: Add"){
	AugStack* s = new AugStack();
	std::vector<int> sample = {1, 2, 3, 4, 5};
	s->add(sample);

	CHECK(s->get(0) == 5);
	CHECK(s->get(1) == 4);
	CHECK(s->get(2) == 3);
	CHECK(s->get(3) == 2);
	CHECK(s->get(4) == 1);

	delete s;
}

TEST_CASE("AUG_STACK: Swap"){
	AugStack* s = new AugStack();
	std::vector<int> sample = {1, 2, 3, 4, 5};
	s->add(sample);

	s->swap(0, 3);
	CHECK(s->get(0) == 2);
	CHECK(s->get(3) == 5);

	s->swap(1, 4);
	CHECK(s->get(1) == 1);
	CHECK(s->get(4) == 4);
	delete s;
}
