#include<iostream>
using namespace std;
int main()
{
	int i,ctr,cube;
	cout<<"\n display the cube of number upto a given integer:\n";
	cout<<"input the number:";
	cin>>ctr;
	for(i=1;i<=ctr;i++)
	{
		cube=i*i*i;
		cout<<"number is:"<<i<<"and the cube of"<<i<<"is:"<<cube<<endl;
	}
}
