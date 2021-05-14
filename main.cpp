#include"quarto.h"
#include"cliente.h"
#include"funcionario.h"

int main() {
	
	Funcionario Func1("Jorginho");
	/*
	Func1.addCliente("Marcelinho", 12);
	Func1.addCliente("xuxu", 69);

	Func1.reservarQuarto("Marcelinho", "luxo", 1, "casal");
	Func1.reservarQuarto("Marcelinho", "simples", 3, "solteiro");

	Func1.reservarQuarto("xuxu", "luxo", 5, "casal");

	/*Func1.Dados();
	Func1.reservas();*/
	string nome, tipo, tcama;
	
	int op=0, cama=0, i=0;
	while (op!=4)
	{
		cout << "\n\nMENU\n1-Reservar quarto\n2-Cadastrar usuario\n3-Registros\n4-Sair\nOpcao: ";
		cin >> op;

		switch (op)
		{
		case 1:
			
			cout << "\nVoce escolheu a opcao 1";
			cout << "\nDigite o nome do cliente: ";
			cin >> nome;
			cout << "\nDigite o tipo de quarto (Simples ou luxo): ";
			cin >> tipo;
			cout << "\nDigite a quantidade de camas: ";
			cin >> cama;
			cout << "\nDigite o tipo das camas (Solteiro ou casal): ";
			cin >> tcama;
			
			Func1.reservarQuarto(nome, tipo, cama, tcama);

			
			break;
		case 2:
			cout << "\nOPCAO 2\n\nDigite o Nome e idade do cliente:";
			cin >> nome;
			cin >> i;

			Func1.addCliente(nome, i);
			cout << "\nUsuario cadastrado com sucesso\n";
			break;
		case 3:
			cout << "Que tipo de registro deseja acessar?\n1-Detalhado\n2-Simples\n";
			cin >> op;
			switch (op) {
			case 1:
				Func1.Dados();
				break;
			case 2:
				Func1.reservas();
				break;
			default:
				cout << "Opcao invalida";
			}
			break;
		case 4:
			cout << "\nFechando o menu\n";
			break;
		default:
			cout << "Opcao invalida";
			break;
		}
	}
	
}