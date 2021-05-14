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

	void Verifica();
	void alteraDados();
	void reservarQuarto(string n, string t, int nc, string tc);
	
	void Dados();

	void addCliente(string n, int i);

	void reservas();

private:
	string nome;

	vector<Cliente> ClientesCadastrados;
};



#endif // !funcionario_h
