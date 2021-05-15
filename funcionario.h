#ifndef funcionario_h
#define funcionario_h

#include"cliente.h"
#include<vector>
#include <iostream>
using namespace std;

class Funcionario
{
public:
	Funcionario(string n);

	void setNome(string n);
	string getNome();

	void alteraDados(string nome);
	void reservarQuarto(string n, string t, int nc, string tc, int e);

	void Dados();
	void addCliente(string n, int i);
	void reservas();
	void Disponibilidade(int id);

private:
	string nome;

	vector<Cliente> ClientesCadastrados;
};



#endif // !funcionario_h
