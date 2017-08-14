#include <iostream>
#include <stdio.h>




using namespace std;
template<typename T>

T myadd(T t1, T t2)
{

	return t1+t2;
}

int main1(void)
{
	int a = 0;
	float b = 0;

	cout << "a = " << myadd<int>(1,2) << endl;
	cout << "b = " << myadd<float>(1.3,2.65) << endl;
	system("pause");
	return 0;
}



