#pragma once
#include "stdafx.h"
using namespace std;

class BST
{
public:
	BST();
	BST(vector<int>);
	~BST();
	void add_node(int);
	void delete_node(int);
	int get_max();
	int get_min();
	int get_successor(int);
	int get_predecessor(int);


	vector<int> pre_order();
	vector<int> in_order();
	vector<int> post_order();


private:
	vector<node> listeItem;
};

