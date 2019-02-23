#include "LinkedList.h"

int main(void)
{
	LinkedList l;
	string str;

	for(int i=0; ; i++)
	{
		cout<<"Enter a word: ";
		cin>>str;

		if(l.search(str)==false)
			break;
	}

	getchar();
	getchar();
	return 0;
}
