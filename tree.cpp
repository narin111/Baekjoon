#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > tree(27);

void preorder(int pos)
{
	printf("%c", pos+'A');
	if(tree[pos][0]!='.'-'A')
	{
		preorder(tree[pos][0]);
	}
	if(tree[pos][1]!='.'-'A')
	{
		preorder(tree[pos][1]);
	}
}

void inorder(int pos)
{
	if(tree[pos][0]!='.'-'A'){
		inorder(tree[pos][0]);
	}
	printf("%c", pos+'A');
	if(tree[pos][1]!='.'-'A'){
		inorder(tree[pos][1]);
	}
}

void postorder(int pos)
{
	if(tree[pos][0]!='.'-'A'){
		postorder(tree[pos][0]);
	}
	if(tree[pos][1]!='.'-'A'){
		postorder(tree[pos][1]);
	}
	printf("%c", pos+'A');
}

int main(){
	int N;
	char p, s1, s2;
	scanf(" %d", &N);
	for(int i=0; i<N; i++){
		scanf(" %c %c %c", &p, &s1, &s2);
		tree[p-'A'].push_back(s1-'A');
		tree[p-'A'].push_back(s2-'A');	
	}
	preorder(0);
	printf("\n");
	inorder(0);
	printf("\n");
	postorder(0);
	return 0;
}
