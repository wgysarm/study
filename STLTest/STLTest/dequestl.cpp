#include "dequestl.h"
#include <string>

using namespace std;


void printall(deque<int> dq)
{
	for(deque<int>::iterator it = dq.begin(); it < dq.end(); it++)
	{
		cout << *it << " " ;
	}
	cout << endl;
}

void printsize(deque<int> dq)
{
	cout << "size is :" << dq.size() << endl;
}

void dequetest(void)
{

	deque<int> dequeInt(10);

	deque<string> dequeStr;
	printsize(dequeInt);
	
	dequeInt.push_back(10);
	dequeInt.push_back(12);
	
	printsize(dequeInt);
	
	dequeInt.push_front(2);
	dequeInt.push_front(3);

	printsize(dequeInt);

	dequeInt.insert(dequeInt.begin()+2,5);

	printsize(dequeInt);

	printall(dequeInt);

	dequeInt.assign(12,6);
	
	printall(dequeInt);

	dequeInt.erase(dequeInt.begin()+4);

	dequeInt.erase(dequeInt.end()-3);

	printsize(dequeInt);

	dequeInt.pop_back();
	dequeInt.pop_front();

	dequeInt.insert(dequeInt.begin()+6, 24);

	printsize(dequeInt);

	printall(dequeInt);


	cout <<  dequeInt.at(6) << endl;

	dequeInt.erase(dequeInt.begin()+4);
	printall(dequeInt);
	printsize(dequeInt);

	dequeInt.clear();
	printsize(dequeInt);

	return;

}