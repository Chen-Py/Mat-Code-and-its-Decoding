#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
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
struct Trie
{
	vector<node>tree;
	int cnt=0;
	void insert(string s)
	{
		if(tree.empty())tree.push_back(node('0'));
		int to=0;
		for(int i=0;i<s.size();i++)
		{
			if(!tree[to].son[s[i]-'a'])
			{
				tree.push_back(node(s[i]));
				tree[to].son[s[i]-'a']=++cnt;
			}
			to=tree[to].son[s[i]-'a'];
		}
		tree[to].end=1;
		return;
	}
	bool check(string s)
	{
		if(tree.empty())return 0;
		int to=0;
		for(int i=0;i<s.size();i++)
		{
			if(!tree[to].son[s[i]-'a'])return 0;
			to=tree[to].son[s[i]-'a'];
		}
		if(!tree[to].end)return 0;
		return 1;
	}
};
int main()
{
	return 0;
}
