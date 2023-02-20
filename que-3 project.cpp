#include<iostream>
using namespace std;
void toggleChars(char str[])
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&& str[i]<='Z')
		   str[i]=str[i]+'a'-'A';
		else if(str[i]>='a'&& str[i]<='z')
		   str[i]=str[i]+'A'-'a';  
	}
}
int main()
{
	char str[]="hfvb@khuh#Yvjh";
	cout<<"string before toggle::"<<str<<endl;
	toggleChars(str);
	cout<<"string after toggle::"<<str;
}
