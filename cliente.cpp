#include"cliente.h"

Cliente::Cliente(string n, int i)
{
	nome = n;
	idade = i;
	
}

void Cliente::setNome(string n)
{

}

void Cliente::setIdade(int i)
{
}


string Cliente::getNome()
{
	return nome;
}

int Cliente::getIdade()
{
	return idade;
}

void Cliente::ImprimeDados()
{
	cout <<"\n"<< nome << ": " << idade;

	for (int i = 0; i < QuartosReservados.size(); i++)
	{
		cout << "\nQuarto " << i + 1 << ":"		<<	"\n"
			<<"Tipo:"<< QuartosReservados[i].getTipo()	<<	"\n"
			<<"Quant camas:"<< QuartosReservados[i].getNCamas() <<	"\n"
			<<"Tipo camas:"<< QuartosReservados[i].getTCamas() <<	"\n"
			<<"ID quarto:"<<QuartosReservados[i].getNumeroQuarto()<<"\n";

	}
}

void Cliente::ReservarQuarto(string t, int nc, string tc)
{
	
	QuartosReservados.push_back(Quarto(t, nc, tc));
}

void Cliente::NumeroReservas()
{
	cout << "\nNumero de reservas do cliente " << nome << ":\n" <<
		QuartosReservados.size();
}


