#include "node.h"



node::node()
{
}

node::node(int indice)
{
	valeur = indice;
}

node::node(int indice, int iSide)
{
	valeur = indice;
	side = iSide;
}


node::~node()
{
}

void node::set_droite()
{
	side = 1;
}

void node::set_gauche()
{
	side = -1;
}

void node::set_origine()
{
	side = 0;
}

void node::set_predecesseur(int indicePred)
{
	indicePredecesseur = indicePred;
}

int node::get_valeur()
{
	return valeur;
}

int node::get_side()
{
	return side;
}

int node::get_predecesseur()
{
	return indicePredecesseur;
}