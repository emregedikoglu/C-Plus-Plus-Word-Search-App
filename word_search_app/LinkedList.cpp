#include "LinkedList.h"


int LinkedList::size()const{
	return sz;
}

bool LinkedList::isEmpty()const{
	return sz==0;
}

bool LinkedList::isFull()const{
	return false;
}

LinkedList::LinkedList():Node(){
	head=NULL;
	Node *walk=NULL;

	for(int i=1; i<=9598; i++)
	{
		string str;
		str="AllDocs\\";
		str+=to_string(i);
		str+=".txt";
		ifstream fileread;

		fileread.open(str, ios::in);
		cout<<"Loading: "<<i<<". file"<<endl;

		while(!fileread.eof())
		{
			string s;
			char s2[50];

			fileread>>s;
			transform(s.begin(), s.end(), s.begin(), tolower);

			int k=0;
			int m=0;

			while (m < s.length()) {
				if (s[m] >= 'a' && s[m] <= 'z') {
					s2[k] = s[m];
					k++;
					m++;
				}
				else {
					m++;
				}

			}

			s2[k] = '\0';
			s = s2;

			if(head==NULL)
			{
				Node *newNode = new Node(s,i);
				head=newNode;
				walk=head;
			}
			else
			{
				Node *newNode = new Node(s,i);
				walk->next=newNode;
				walk=walk->next;
			}

		}

		fileread.close();
	}

}

bool LinkedList::search(string str){
	Node *walk=head;
	string stopw;
	int flag=0;
	ifstream fileread;

	fileread.open("stopwords.txt", ios::in);
	while (!fileread.eof())
	{
		fileread>>stopw;
		transform(stopw.begin(), stopw.end(), stopw.begin(), tolower);

		if(str==stopw)
		{
			cout<<"Stop"<<endl;
			return false;
		}

	}
	fileread.close();	

	while(walk!=NULL)
	{
		if(walk->word==str)
		{
			cout<<"It is in "<< walk->index <<".txt"<< endl;
			flag=1;
		}
		walk=walk->next;
	}

	if(flag==0)
		cout<<"Word not found"<<endl;

	return true;
}





