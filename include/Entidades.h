#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Dominios.h"

class Aplicacao{
    public:
        Aplicacao();
        virtual ~Aplicacao();
        CodigoDeAplicacao codigo;
        ValorDeAplicacao valor;
        Data data;

    protected:

    private:
};

class Conta{
    public:
        Conta();
        virtual ~Conta();
        CodigoDeBanco banco;
        CodigoDeAgencia agencia;
        Numero numero;

    protected:

    private:
};

class Produto{
    public:
        Produto();
        virtual ~Produto();
        CodigoDeProduto codigo;
        Classe classe;
        Emissor emissor;
        Prazo prazo;
        Data vencimento;
        Taxa taxa;
        Horario horario;
        ValorMinimo valor;

    protected:

    private:
};

class Usuario{
    public:
        Usuario();
        virtual ~Usuario();
        Nome nome;
        Endereco endereco;
        CEP cep;
        CPF cpf;
        Senha senha;

    protected:

    private:
};



#endif // ENTIDADES_H_INCLUDED
