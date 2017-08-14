
#include "func.h"

using namespace std;



TEST::TEST()
{
	n = 5;
	c = 'a';
}

TEST::~TEST()
{
 	cout << "TEST destroy!" << endl;
}


int TEST::getarg(void)
{
	cout << this->n  << "----" << this->c << endl;
	return 0;
}

