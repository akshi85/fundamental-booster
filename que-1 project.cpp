#include<iostream>
using namespace std;
bool isnumber(string s)
{
	for(int i=0;i<s.length();i++)
	if(isdigit(s[i])==false)
	return false;
	return true;   
	
}
int main()
{
	string str="1524";
	if(isnumber(str))
	  cout<<"integer";
	else
	  cout<<"string";  
}
