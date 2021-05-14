#include "funcionario.h"

Funcionario::Funcionario(string n)
{
	nome = n;
}

void Funcionario::setNome(string n)
{
	nome = n;
}

string Funcionario::getNome()
{
	return string();
}

void Funcionario::Verifica()
{
}

void Funcionario::alteraDados()
{
}

void Funcionario::reservarQuarto(string n, string t, int nc, string tc)
{
	int c=0;
	for (int i = 0; i < ClientesCadastrados.size(); i++)
	{
		if (ClientesCadastrados[i].getNome() == n) {
			ClientesCadastrados[i].ReservarQuarto(t, nc, tc);
			c++;
			cout << "\nReserva realizada com sucesso\n";
		}
		
	}
	if (c==0)
	{
		cout << "\n-ERRO-\nCliente não encontrado";
	}

}

void Funcionario::Dados()
{
	for (int i = 0; i < ClientesCadastrados.size(); i++)
	{
		ClientesCadastrados[i].ImprimeDados();
	}

}

void Funcionario::addCliente(string n, int i)
{
	ClientesCadastrados.push_back(Cliente(n, i));
}

void Funcionario::reservas()
{
	for (int i = 0; i < ClientesCadastrados.size(); i++)
	{
		ClientesCadastrados[i].NumeroReservas();
	}
}
