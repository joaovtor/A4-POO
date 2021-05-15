#include"quarto.h"

int Quarto::novoID = 0;

Quarto::Quarto(string t, int nc, string tc, int e)
{
	tipo = t;
	nCamas = nc;
	tCamas = tc;
	estadia = e;
	nQuarto = GeraID();
}

string Quarto::getTipo()
{
	return tipo;
}

int Quarto::getNCamas()
{
	return nCamas;
}

string Quarto::getTCamas()
{
	return tCamas;
}

int Quarto::getNumeroQuarto()
{
	return nQuarto;
}

int Quarto::getEstadia()
{
	return estadia;
}

int Quarto::GeraID()
{
	novoID++;
	return novoID;
}
