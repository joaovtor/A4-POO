#include"quarto.h"
#include"cliente.h"
#include"funcionario.h"

int main() {
	
	Funcionario Func1("Jorginho");

	string nome, tipo, tcama, n;
	
	int op=0, cama=0, i=0, id=0, e=0;
	while (op!=5)
	{
		cout << "\n\nMENU\n1-Reservar quarto\n"<<
			"2-Cadastrar ou alterar dados de usuario\n"<<
			"3-Registros\n"<<
			"4-Verificar disponibilidade\n5-Sair\nOpcao: ";
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
			cout << "Digite quanto tempo o cliente deseja reservar (dias): ";
			cin >> e;
			
			Func1.reservarQuarto(nome, tipo, cama, tcama, e);

			break;
		case 2:
			cout << "\nOPCAO2\n1-Criar um registro\n2-Alterar um existente\n";
			cin >> op;
			
			switch (op)
			{

			case 1:
				cout << "\nDigite o Nome do cliente: ";
				cin >> nome;
				cout << "Digite a idade do cliente: ";
				cin >> i;

				Func1.addCliente(nome, i);
				cout << "\nUsuario cadastrado com sucesso\n";
				break;
			case 2:
				cout << "\nDigite o nome do cliente que deseja alterar: ";
				cin >> nome;
				cout << "\nDigite o novo nome do cliente: ";
				cin >> n;

				Func1.alteraDados(nome, n);

			default:
				cout << "Opcao invalida";
				break;
			}
			
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
			cout << "\nOPCAO 4\nDigite o numero do quarto que deseja checar: ";
			cin >> id;
			Func1.Disponibilidade(id);
			break;
		case 5:
			cout << "Fechando Menu";
			break;
		default:
			cout << "Opcao invalida";
			break;
		}
	}
	
}