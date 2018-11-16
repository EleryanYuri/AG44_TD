#include "BST.h"


BST::BST()
{
}

BST::BST(vector<int> items)
{
	for (auto& i : items)
	{
		node* unNode = new node(i);
		if (listeItem.empty) {
			unNode->set_origine();
			listeItem.push_back(*unNode);
		}
		else {
			int j = 0;
			while (j < listeItem.size)
			{
				if (listeItem[j].get_valeur > unNode->get_valeur())	{
					unNode->set_gauche();
					listeItem[j].set_predecesseur(j + 1);
				}
				else {
					unNode->set_droite();
					unNode->set_predecesseur(j);
				}
			}
		}
	}
}

BST::~BST()
{
}


void BST::add_node(int n)
{

}

void BST::delete_node(int n)
{

}

int BST::get_max()
{
	
}

int BST::get_min()
{

}

int BST::get_successor(int n)
{

}

int BST::get_predecessor(int n)
{

}