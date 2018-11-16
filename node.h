
class node
{
public:
	node();
	node(int);
	node(int, int);
	~node();

	void set_gauche();
	void set_droite();
	void set_origine();
	void set_predecesseur(int);

	int get_valeur();
	int get_side();
	int get_predecesseur();

private:
	int valeur; //valeur du node
	int side; // 0 = origine / 1 = droite / -1 gauche
	int indicePredecesseur;
};
