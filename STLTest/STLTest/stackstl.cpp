
#include "stackstl.h"
#include <iostream>

#include <stack>


using namespace std;


void printsize(stack<int> st)
{
	cout << "stack size = " << st.size() << endl;
}


void stacktest(void)
{
	stack<int> stackInt;

	stackInt.push(1);
	stackInt.push(2);
	stackInt.push(3);
	stackInt.push(4);
	
	printsize(stackInt);

	stackInt.pop();

	printsize(stackInt);

	cout << "pop top = " << stackInt.top() << endl;

	stackInt.pop();
	printsize(stackInt);


	cout << "pop top = " << stackInt.top() << endl;

	stackInt.top() = 19;
	printsize(stackInt);

	cout << "pop top = " << stackInt.top() << endl;


	stackInt.pop();
	printsize(stackInt);

	stackInt.push(5);
	printsize(stackInt);
	cout << "pop top = " << stackInt.top() << endl;

	return;
}

