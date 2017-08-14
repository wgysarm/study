

#include "queuestl.h"

#include <queue>
#include <iostream>
using namespace std;

void printsize(queue<int> qi)
{
	cout << "queue size is " << qi.size() << endl; 


}



void quequetest(void)
{

	queue<int> queueInt;
	
	queueInt.push(1);
	queueInt.push(2);
	queueInt.push(3);
	queueInt.push(4);
	printsize(queueInt);

	cout << queueInt.back() << endl;
	cout << queueInt.front() << endl;

	queueInt.push(5);
	cout << queueInt.front() << endl;
	cout << queueInt.back() << endl;

	queueInt.pop();
	cout << queueInt.front() << endl;
	cout << queueInt.back() << endl;


	while(!queueInt.empty())
	{
		cout << queueInt.front() << endl;
		queueInt.pop();

	}

	printsize(queueInt);


	return;
}