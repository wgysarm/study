
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int i = 0;
	int ret = 0 ;
	const char *strptr = NULL;
	char *strptr1 = NULL;


	string str1 = "i am a cainiao1!";
	string str2("i am a foolish!");
	cout << str1 << endl;
	cout << str2 << endl;
	string str3 = str2.append(str1);

	cout << str2 << endl;
	cout << str3 << endl;

	for(i = 0; i<str1.length(); i++)
	{
		cout << str1.at(i);
	}


	ret = str2.compare(str2);
	cout << "ret = " << ret << endl;


	cout << endl << "string test :" << endl;


	strptr = str1.c_str();
	printf("*strptr = %s\n",strptr);

	strptr1 = (char*)malloc(100*sizeof(char));

	memset(strptr1,0,100);

	str1.copy(strptr1,str1.length(),0);

	ret = str3.find('a',0);
	if(ret < 0)
	{
		cout << "not found!" << endl;
	}
	cout << "find at :" << ret << " position" <<endl;

	printf("*strptr1 = %s\n",strptr1);


	if(strptr1 != NULL)
	{
		free(strptr1);
	}

	ret = str3.find("am");
	if(ret < 0)
	{
		cout << "not found" << endl;
	}

	cout << "find \"am\" at " << ret << endl;


	str3.replace(0,3,"wha");

	cout << "str3:" << str3 << endl;

	cout << "iterator :";
	for(string::iterator it = str1.begin(); it != str1.end(); it ++)
	{
		cout << *it ;
	}
	

	strptr1 = NULL;

	system("pause");
	return 0;
}
