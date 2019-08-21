#include<iostream>
#include<cstdio>
#include<vector> 
using namespace std;
struct MC
{
	char ming[110];
	char m[20][20],mi[110];
	bool key[20][20];
	void in_ming()
	{
		for(int i=1;i<=100;i++)cin>>ming[i];
		return;
	}
	void in_key()
	{
		for(int i=1;i<=10;i++)
		{
			for(int j=1;j<=10;j++)
			{
				cin>>key[i][j];
			}
		}
		return;
	}
	void out_mi()
	{
		for(int i=1;i<=10;i++)
		{
			for(int j=1;j<=10;j++)
			{
				printf("%c ",m[i][j]);
			} 
			printf("\n");
		}
		return;
	}
	void roll()
	{
		bool tmp[11][11];
		for(int i=1;i<=10;i++)
    	{
    	    for(int j=1;j<=10;j++)
    	    {
    	        tmp[i][j]=key[11-j][i];
    	    }
    	}
    	for(int i=1;i<=10;i++)
    	{
    	    for(int j=1;j<=10;j++)
    	    {
    	        key[i][j]=tmp[i][j];
    	    }
    	}
    	return;
	}
	void jiami()
	{
		int cnt=0;
		for(int k=1;k<=4;k++)
		{
			for(int i=1;i<=10;i++)
			{
				for(int j=1;j<=10;j++)
				{
					if(key[i][j])m[i][j]=ming[++cnt];
				}
			}
			roll();
		}
		cnt=0;
		for(int i=1;i<=10;i++)
		{
			for(int j=1;j<=10;j++)
			{
				mi[++cnt]=m[i][j];
			}
		}
		return;
	}
};
struct node
{
	char name;
	int son[26]={0};
	bool end=0;
	node(char c):name(c)
	{
		for(int i=1;i<26;i++)son[i]=0;
	}
};
int main()
{
	return 0;
} 
