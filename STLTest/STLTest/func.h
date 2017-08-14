#ifndef _FUNC_H_
#define _FUNC_H_

#include <iostream>
using namespace std;


template <typename T>
T mymin(T a, T b)
{
	return (a < b ?a : b);
}

template <typename T, int n>
class A{
	int size;
	T *element;

public:A();
	   ~A();

	   T search(T);
	   int setElement(T,int pos); 
};



template <typename T, int n>
A<T , n>::A()
{
	cout << "construct" << endl;
	size = n > 1 ? n:1;
	element = (T*) new T[size];
}


template <typename T, int n>
A<T ,n>::~A()
{
	cout << "destuct!" << endl;
	delete[] element;
}


class TEST{
	int n ;
	char c ;
public:
	TEST();
	~TEST();

	int getarg(void);

};






#endif