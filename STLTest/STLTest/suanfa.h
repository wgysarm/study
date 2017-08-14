#ifndef _SUANFA_H_
#define _SUANFA_H_

#include <vector>

template <typename T>
vector<T> createVector(void)
{
	
	vector<T> v;

	v.push_back((T)1);
	v.push_back((T)2);
	v.push_back((T)3);


	return v;
}


void suanfatest(void);

#endif