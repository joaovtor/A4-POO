#ifndef quarto_h
#define quarto_h

#include<iostream>
using namespace std;

class Quarto
{
public:
	Quarto(string t, int nc, string tc);

	string getTipo();
	int getNCamas();
	string getTCamas();
	int getNumeroQuarto();

	void setTipo(string t);
	void setNCamas(int nc);
	void setTCamas(string tc);



private:

	string tipo;
	int nCamas;
	string tCamas;
	int nQuarto;

	int static novoID;
	int GeraID();
};



#endif // !quarto_h

