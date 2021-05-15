#include"cliente.h"

Cliente::Cliente(string n, int i)
{
	nome = n;
	idade = i;
	
}

void Cliente::setNome(string n)
{
	nome = n;
}

void Cliente::setIdade(int i)
{
	idade = i;
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
	cout <<"\n"<< nome << ", " << idade<<" Anos";

	for (int i = 0; i < QuartosReservados.size(); i++)
	{
		cout << "\nQuarto " << i + 1 << ":"								<<"\n"
			<<"Tipo: "<< QuartosReservados[i].getTipo()					<<"\n"
			<<"Quant camas: "<< QuartosReservados[i].getNCamas()		<<"\n"
			<<"Tipo camas: "<< QuartosReservados[i].getTCamas()			<<"\n"
			<<"ID quarto: "	<< QuartosReservados[i].getNumeroQuarto()	<<"\n"
			<<"Tempo de estadia: "<< QuartosReservados[i].getEstadia()	<<" Dias\n";

	}
}

void Cliente::ReservarQuarto(string t, int nc, string tc,int e)
{
	
	QuartosReservados.push_back(Quarto(t, nc, tc, e));
}

void Cliente::NumeroReservas()
{
	cout << "\nNumero de reservas do cliente " << nome << ":\n" <<
		QuartosReservados.size();
}

void Cliente::VerificaQuarto(int id)
{
	int cont = 0;
	for (int i = 0; i < QuartosReservados.size(); i++)
	{
		if (QuartosReservados[i].getNumeroQuarto()==id)
		{
			cout << "\nEsse quarto esta ocupado\n";
			cont++;
		}
	}
	if (cont==0)
	{
		cout << "Este quarto esta disponivel";
	}
}




