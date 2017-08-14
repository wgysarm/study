#include <list>
#include <iostream>
#include "liststl.h"
#include <string>

using namespace std;
template <typename T>
void printsize(list<T> lt)
{
	cout << "size is :" << lt.size() << endl;

}

template <typename T>
void printpos(list<T> lt , int pos)
{
	list<T>::iterator it = lt.begin() ;

	while(pos > 0)
	{
		pos --;
	    it++;	
		//cout << *it << endl;
	}
	cout << *it << endl;

}



void listtest(void)
{
	list<int> listInt;

	listInt.push_front(1);
	listInt.push_front(2);
	listInt.push_front(3);
	listInt.push_back(4);
	listInt.push_back(5);


	cout << "lostInt size is:" ;

	printsize(listInt);

	printpos(listInt,0);
	printpos(listInt,1);
	printpos(listInt,2);
	printpos(listInt,3);
	printpos(listInt,4);


	listInt.insert(listInt.begin(),6);

	printpos(listInt,0);

	printpos(listInt,5);

	list<double> listDouble;
	listDouble.push_front(1.1);
	listDouble.push_front(1.2);
	listDouble.push_front(1.3);

	printsize(listDouble);

	printpos(listDouble,0);
	printpos(listDouble,1);
	printpos(listDouble,2);


	list<string> liststring;
	liststring.push_back("first");
	liststring.push_back("second");
	liststring.push_back("third");

	printsize(liststring);
	
	string str1 =  *liststring.begin();
	cout << "str1:"  << *str1.c_str()<<endl;
	printf("%s\n",str1.c_str());

	string str2 = "what";
	cout << str2;

	printpos(liststring,0);

	for(int i = 0; i < 3 ; i++)
	{
		printpos(liststring,i);
	}

	liststring.erase(liststring.begin());
	printsize(liststring);

	liststring.clear();
	printsize(liststring);



	return;
}