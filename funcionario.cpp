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


void Funcionario::alteraDados(string nome)
{
	int cont=0;
	for (int i = 0; i < ClientesCadastrados.size(); i++)
	{
		if (ClientesCadastrados[i].getNome() == nome) {
			ClientesCadastrados[i].setNome(nome);
			cont++;
		}
	}
	if (cont==0)
	{
		cout << "\nERRO\nCliente nao encontrado";
	}
	else {
		cout << "\nNome alterado com sucesso\n";
	}
}

void Funcionario::reservarQuarto(string n, string t, int nc, string tc, int e)
{
	int c=0;
	for (int i = 0; i < ClientesCadastrados.size(); i++)
	{
		if (ClientesCadastrados[i].getNome() == n) {
			ClientesCadastrados[i].ReservarQuarto(t, nc, tc, e);
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

void Funcionario::Disponibilidade(int id)
{
	for (int i = 0; i < ClientesCadastrados.size(); i++)
	{
		ClientesCadastrados[i].VerificaQuarto(id);
	}
}
