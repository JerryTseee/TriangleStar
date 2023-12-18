#include<iostream>
using namespace std;
#include<string>

int main()
{
	int num;
	string output="";
	cin>>num;//the number of output stars in the last line.

	if (num%2==0)
		num--;//if the number is even, then deduct one, to get the odd number

	int space = num/2;
	int star = 0;

	int line = (num+1)/2;//total line

	for (int i = 0; i<line; i++)
	{
		for (int j =0;j<=space;j++)
		{
			output+=" ";
		}
		for (int k=0;k<=star;k++)
		{
			output+="*";
		}
		
		if (i != line-1)
			output+="\n";//change the line

		space--;
		star+=2;//from top to lower lines, the number of stars increase two
	}

	cout<<output<<endl;

	return 0;
}
