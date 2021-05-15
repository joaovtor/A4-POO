#ifndef Clientes_hpp
#define Clientes_hpp

#include"quarto.h"
#include<vector>
#include <iostream>
using namespace std;

class Cliente {

public:

    Cliente(string n, int i);

    void setNome(string n);
    void setIdade(int i);

    string getNome();
    int getIdade();

    void ImprimeDados();
    void ReservarQuarto(string t, int nc, string tc, int e);
    void NumeroReservas();
    void VerificaQuarto(int id);
    

private:

    string nome;
    int idade;
    

    vector<Quarto> QuartosReservados;
    
};

#endif