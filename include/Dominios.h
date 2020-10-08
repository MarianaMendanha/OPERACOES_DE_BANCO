#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>

/// \brief Classe que permite modificar e obter o CEP. Possui valores que determinam faixas espec&iacute;ficas dependendo da cidade do usu&aacute;rio.
///
class CEP{
    public:
/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa CEP com valor default 1000000.
///
///
        CEP();


/// \brief Inicializa o objeto com valor transmitido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_cep() caso inv&aacute;lido.
///
/// \param (int) valor CEP
///
///
        CEP(int);


/// \brief M&eacute;todo destrutor
///
/// \return virtual
///
///
        virtual ~CEP();

/// \brief M&eacute;todo que modifica CEP armazenado para um usu&aacute;rio. <br>
/// Pede ao usu&aacute;rio que insira um n&uacute;mero de CEP com apenas n&uacute;meros e valida esse valor.
///
///
        void set_cep();

/// \brief M&eacute;todo que imprime na tela o valor de CEP.
///
///
        void get_cep();

    protected:

    private:
        const int LIMITE_INFERIORA_SP = 1000000;   ///< Primeiro limite inferior para a cidade de S&atilde;o Paulo.
        const int LIMITE_SUPERIORA_SP = 5999999;   ///< Primeiro limite superior para a cidade de S&atilde;o Paulo.
        const int LIMITE_INFERIORB_SP = 8000000;   ///< Segundo limite inferior para a cidade de S&atilde;o Paulo.
        const int LIMITE_SUPERIORB_SP = 8499999;   ///< Segundo limite superior para a cidade de S&atilde;o Paulo.
        const int LIMITE_INFERIOR_RJ = 20000000;   ///< Limite inferior para a cidade do Rio de Janeiro.
        const int LIMITE_SUPERIOR_RJ = 26600999;   ///< Limite superior para a cidade do Rio de Janeiro.
        const int LIMITE_INFERIOR_BSB = 70000000;  ///< Limite inferior para a cidade de Bras&iacute;lia.
        const int LIMITE_SUPERIOR_BSB = 70999999;  ///< Limite superior para a cidade de Bras&iacute;lia.
        const int LIMITE_INFERIORA_FOR = 40000000; ///< Primeiro limite inferior para a cidade de Fortaleza.
        const int LIMITE_SUPERIORA_FOR = 41999999; ///< Primeiro limite superior para a cidade de Fortaleza.
        const int LIMITE_INFERIORB_FOR = 60000000; ///< Segundo limite inferior para a cidade de Fortaleza.
        const int LIMITE_SUPERIORB_FOR = 60999999; ///< Segundo limite superior para a cidade de Fortaleza.

        int cep;                                   ///< Atributo que armazena o valor de CEP do usu&aacute;rio.

/// \brief M&eacute;todo validar CEP. Implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o de cep, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas é lan&ccedil;ada exce&ccedil;&atilde;.
///
/// \throw invalid_argument
///
/// \return void
///
///
        void validar_cep();
};

/// \brief Classe que permite modificar e obter a classe de um produto. Classes podem ser CDB, LCA, LCI, LF ou LC.
///
class Classe{
    public:
/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa classe com valor default CDB.
///
///
        Classe();


/// \brief M&eacute;todo construtor que incializa classe com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_classe() caso inv&aacute;lido.
///
/// \param (std::string) valor classe
///
///
        Classe(std::string);

/// \brief M&eacute;todo destrutor
///
/// \return virtual
///
///
        virtual ~Classe();

/// \brief M&eacute;todo set classe. Pede ao usu&aacute;rio que insira a classe do produto e valida classe.
///
/// \return void
///
///
        void set_classe();

/// \brief M&eacute;todo que imprime na tela o valor de classe.
///
/// \return void
///
///
        void get_classe();

    protected:

    private:

/// \brief Atributo std::string que armazena valor da classe
///
///
        std::string classe;

/// \brief M&eacute;todo validar classe. Implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o de classe, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \return void
///
/// \throw invalid_argument
///
///
        void validar_classe();
};

/// \brief Classe que permite modificar e obter c&oacute;digo de ag&ecirc;ncia para contas.
///
class CodigoDeAgencia{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa c&oacute;digo de ag&ecirc;ncia com valor default 0001.
///
        CodigoDeAgencia();


/// \brief M&eacute;todo construtor que incializa codigoagencia com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_codigo_agencia() caso inv&aacute;lido.
///
/// \param (std::string) valor c&oacute;digo de ag&ecircncia
///
///
        CodigoDeAgencia(std::string);

/// \brief M&eacute;todo destrutor
///
/// \return virtual
///
///
        virtual ~CodigoDeAgencia();

/// \brief M&eacute;todo set c&oacute;digo de ag&ecirc;ncia. Pede ao usu&aacute;rio que insira um c&oacute;digo de ag&ecirc;ncia e o valida.
///
/// \return void
///
///
        void set_codigo_agencia();

/// \brief M&eacute;todo que imprime na tela c&oacute;digo de ag&ecirc;ncia.
///
/// \return void
///
///
        void get_codigo_agencia();

    protected:

    private:

/// \brief Atributo que armazena c&oacute;digo de ag&ecirc;ncia de uma conta.
///
        std::string codigoagencia;

/// \brief M&eacute;todo validar c&oacute;digo de ag&ecirc;ncia. <br>
/// implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o de codigoagencia, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
/// \throw invalid_argument.
///
/// \return void
///
///
        void validar_codigo_agencia();
};

/// \brief Classe que permite modificar e obter o c&oacute;digo de aplica&ccedil;&atilde;o para aplica&ccedil;&otilde;es.
///
class CodigoDeAplicacao{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa c&oacute;digo de aplica&ccedil;&atilde;o com valor default 00001.
///
        CodigoDeAplicacao();

/// \brief M&eacute;todo construtor que incializa codigoaplicacao com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_codigo_aplicacao() caso inv&aacute;lido.
///
/// \param (std::string) valor codigoaplicacao
///
///
        CodigoDeAplicacao(std::string);

/// \brief M&eacute;todo destrutor
///
/// \return virtual
///
///
        virtual ~CodigoDeAplicacao();

/// \brief M&eacute;todo set c&oacute;digo de aplica&ccedil;&atilde;o. Pede ao usu&aacute;rio que insira um c&oacute;digo de aplica&ccedil;&atilde;o e o valida.
///
/// \return void
///
///
        void set_codigo_aplicacao();

/// \brief M&eacute;todo que imprime na tela o valor armazenado em codigoaplicacao.
///
/// \return void
///
///
        void get_codigo_aplicacao();

    protected:

    private:

/// \brief Atributo que armazena c&oacute;digo de aplica&ccedil;&atilde;o.
///
        std::string codigoaplicacao;

/// \brief M&eacute;todo validar c&oacute;digo de aplica&ccedil;&atilde;o. <br>
/// implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o de codigoaplicacao, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \throw invalid_argument
///
/// \return void
///
///
        void validar_codigo_aplicacao();
};

/// \brief Classe que permite modificar e obter c&oacute;digo de banco para contas.
///
class CodigoDeBanco{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa c&oacute;digo de banco com valor default 001.
///
        CodigoDeBanco();

/// \brief M&eacute;todo construtor que incializa codigobanco com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_codigo_banco() caso inv&aacute;lido.
///
/// \param (std::string) valor de codigobanco
///
///
        CodigoDeBanco(std::string);

/// \brief M&eacute;todo destrutor
///
/// \return virtual
///
///
        virtual ~CodigoDeBanco();

/// \brief M&eacute;todo set c&oacute;digo de banco. Pede ao usu&aacute;rio que insira um c&oacute;digo de banco e o valida.
///
/// \return void
///
///
        void set_codigo_banco();

/// \brief M&eacute que imprime na tela o valor de codigobanco.
///
/// \return void
///
///
        void get_codigo_banco();

    protected:

    private:
        const std::string BANCO_DO_BRASIL = "001"; ///< C&oacute;digo de banco do Banco do Brasil
        const std::string SANTANDER = "033";       ///< C&oacute;digo de banco do Santander
        const std::string CAIXA = "104";           ///< C&oacute;digo de banco da Caixa
        const std::string BRADESCO = "237";        ///< C&oacute;digo de banco do Bradesco
        const std::string ITAU = "341";            ///< C&oacute;digo de banco do Ita&uacute;

        std::string codigobanco;                   ///< Atributo que armazena o valor de c&oacute;digo de banco.

/// \brief M&eacute;todo validar c&oacute;digo de banco. <br>
/// implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o de codigobanco, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
/// \throw invalid_argument
///
/// \return void
///
///
        void validar_codigo_banco();
};

/// \brief Classe que permite modificar e obter c&oacute;digo de produto para produtos.
///
class CodigoDeProduto{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa c&oacute;digo de produto com valor default 001.
///
        CodigoDeProduto();

/// \brief M&eacute;todo construtor que incializa codigoproduto com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_codigo_produto() caso inv&aacute;lido.
///
/// \param (std::string) valor de codigoproduto
///
///
        CodigoDeProduto(std::string);

/// \brief M&eacute;todo destrutor
///
/// \return virtual
///
///
        virtual ~CodigoDeProduto();

/// \brief M&eacute;todo set c&oacute;digo de produto. Pede ao usu&aacute;rio que insira um c&oacute;digo de produto e o valida.
///
/// \return void
///
///
        void set_codigo_produto();

/// \brief M&eacute;todo que imprime na tela o valor de codigoproduto.
///
/// \return void
///
///
        void get_codigo_produto();

    protected:

    private:

/// \brief Atributo que armazena c&oacute;digo de produto.
///
        std::string codigoproduto;

/// \brief M&eacute;todo validar c&oacute;digo de produto. <br>
/// implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o de codigoproduto, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
/// \throw invalid_argument
///
/// \return void
///
///
        void validar_codigo_produto();
};

/// \brief Classe que permite modificar e obter CPF de usu&aacute;rios.
///
class CPF{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa CPF com valor default 000.000.000-00.
///
        CPF();

/// \brief M&eacute;todo construtor que incializa cpf com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_cpf() caso inv&aacute;lido.
///
/// \param (std::string) valor de cpf
///
///
        CPF(std::string);

/// \brief M&eacute;todo destrutor
///
/// \return virtual
///
///
        virtual ~CPF();

/// \brief M&eacute;todo set CPF. Pede ao usu&aacute;rio que insira um CPF e o valida.
///
/// \return void
///
///
        void set_cpf();

/// \brief M&eacute;todo que imprime na tela o valor de CPF.
///
/// \return void
///
///
        void get_cpf();

    protected:

    private:

/// \brief Atributo que armazena CPF.
///
        std::string cpf;

/// \brief M&eacute;todo validar CPF. <br>
/// implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o de cpf, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \throw invalid_argument
/// \return void
///
///
        void validar_cpf();
};

/// \brief Classe que possibilita modificar e obter data de produtos e aplica&ccedil;&otilde;es.
///
class Data{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa data com valor default 01/01/2020.
///
        Data();

/// \brief M&eacute;todo construtor que incializa data com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_data(std::string, std::string, std::string) caso inv&aacute;lido.
///
/// \param (std::string) dia <br>
/// (std::string) m&ecirc;s <br>
/// (std::string) ano
///
///
        Data(std::string, std::string, std::string);

/// \brief M&eacute;todo destrutor
///
/// \return virtual
///
///
        virtual ~Data();
/// \brief M&eacute;todo set data. <br>
/// Pede ao usu&aacute;rio que insira uma data que contenha dia, m&ecirc;s, ano um por um, nessa ordem e valida data. <br>
/// Caso a quantidade de d&iacute;gitos para dia ou m&ecirc;s seja igual a um, adiciona-se um d&iacute;gito zero na posi&ccedil;&atilde;o zero da string referente.
/// \return void
///
///
        void set_data();

/// \brief M&eacute;todo que imprime na tela valor armazenado em data.
///
/// \return void
///
///
        void get_data();

    protected:

    private:
        const int MINIMO_ANO = 2020; ///< Limite inferior para ano.
        const int MAXIMO_ANO = 2099; ///< Limite superior para ano.

        std::string data;            ///< Atributo que armazena data.

/// \brief M&eacute;todo validar data. <br>
/// Recebe 3 par&acirc;metros que s&atilde;o strings. <br>
/// Implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o da data, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \param (std::string) dia, primeiro argumento.
/// \param (std::string) mes, segundo argumento.
/// \param (std::string) ano, terceiro argumento.
///
/// \throw invalid_argument
/// \return void
///
///
        void validar_data(std::string, std::string, std::string);
};

/// \brief Classe que possibilita obter e modificar emissor para produtos.
///
class Emissor{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa emissor com valor default Sem Emissor.
///
        Emissor();

/// \brief M&eacute;todo construtor que incializa emissor com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_emissor() caso inv&aacute;lido.
///
/// \param (std::string) valor de emissor
///
///
        Emissor(std::string);

/// \brief M&eacute;todo destrutor.
///
/// \return virtual
///
///
        virtual ~Emissor();

/// \brief M&eacutetodo set emissor. Pede ao usu&aacute;rio que insira o emissor e o valida.
///
/// \return void
///
///
        void set_emissor();

/// \brief M&eacute; que imprime na tela valor armazenado em emissor.
///
/// \return void
///
///
        void get_emissor();

    protected:

    private:
        const unsigned int MINIMO_CARACTERES = 5;  ///< Limite inferior de caracteres
        const unsigned int MAXIMO_CARACTERES = 30; ///< Limite superior de caracteres
        const int EMISSOR = 0;                     ///< N&uacute;mero identificador para fun&ccedil;&otilde;es howManyPunctuations(std::string, int) e isValidText(std::string, int)

        std::string emissor;                       ///< Atributo que armazena emissor

/// \brief M&eacute;todo validar emissor. <br>
/// implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o da emissor, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \throw invalid_argument
///
/// \return void
///
///
        void validar_emissor();
};

/// \brief Classe que possibilita obter e modificar valor de endere&ccedil;o para usu&aacute;rios.
///
class Endereco{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa endereco com valor default Sem Endere&ccedil;o.
///
        Endereco();

/// \brief M&eacute;todo construtor que incializa endere&ccedil;o com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_endereco() caso inv&aacute;lido.
///
/// \param (std::string) valor de endere&ccedil;o
///
///
        Endereco(std::string);

/// \brief M&eacute;todo destrutor.
///
/// \return virtual
///
///
        virtual ~Endereco();

/// \brief M&eacute;todo set endere&ccedil;o. Pede ao usu&aacute;rio que insira seu endere&ccedil;o e o valida.
///
/// \return void
///
///
        void set_endereco();

/// \brief M&eacute;todo que imprime na tela o valor de endereco.
///
/// \return void
///
///
        void get_endereco();

    protected:

    private:
        const unsigned int MINIMO_CARACTERES = 5;   ///< Limite inferior de caracteres
        const unsigned int MAXIMO_CARACTERES = 20;  ///< Limite superior de caracteres
        const int ENDERECO = 1;                     ///< N&uacute;mero identificador para fun&ccedil;&otilde;es howManyPunctuations(std::string, int) e isValidText(std::string, int)

        std::string endereco;                       ///< Atributo que armazena endere&ccedil;o.

/// \brief M&eacute;todo validar endere&cceil;o. <br>
/// implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o do endere&ccedil;o, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \throw invalid_argument
///
/// \return void
///
///
        void validar_endereco();
};

/// \brief Classe que possibilita obter e modificar hor&aacute;rio
///
class Horario{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa horario com valor default 13:00.
///
        Horario();

/// \brief M&eacute;todo construtor que incializa hor&aacute;rio com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_horario(std::string, std::string) caso inv&aacute;lido.
///
/// \param (std::string) horas
/// \param (std::string) minutos
///
///
        Horario(std::string, std::string);

/// \brief M&eacute;todo destrutor.
///
/// \return virtual
///
///
        virtual ~Horario();

/// \brief M&eacute;todo set hor&aacute;rio. <br>
/// Pede ao usu&aacute;rio que insira o hor&aacute;rio que cont&eacute;m horas, minutos um por um, nessa ordem e os valida. <br>
/// Caso a quantidade de d&iacute;gitos para minutos seja igual a 1, adiciona-se um d&iacute;gito zero na posi&ccedil;&atilde;o zero da string minutos.
///
/// \return void
///
///
        void set_horario();

/// \brief M&eacute;todo que imprime na tela valor armazenado em horario.
///
/// \return void
///
///
        void get_horario();

    protected:

    private:
        const int MINIMO_HORARIO = 13;  ///< Limite inferior para hora
        const int MAXIMO_HORARIO = 17;  ///< Limite superior para hora

        std::string horario;            ///< Atributo que armazena hor&aacute;rio

/// \brief M&eacute;todo validar hor&aacute;rio. <br>
/// implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o do hor&aacute;rio, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \param (std::string) horas, primeiro argumento.
/// \param (std::string) minutos, segundo argumento.
///
/// \throw invalid_argument.
///
/// \return void
///
///
        void validar_horario(std::string, std::string);
};

/// \brief Classe que possibilita obter e modificar nome de usu&aacute;rio.
///
class Nome{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa nome com valor default Sem Nome.
///
        Nome();

/// \brief M&eacute;todo construtor que incializa nome com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_nome() caso inv&aacute;lido
///
/// \param (std::string) valor de nome
///
///
        Nome(std::string);

/// \brief M&eacute;todo destrutor.
///
/// \return virtual
///
///
        virtual ~Nome();

/// \brief M&eacute;todo set nome. Pede ao usu&aacute;rio que insira seu nome e o valida.
///
/// \return void
///
///
        void set_nome();

/// \brief M&eacute;todo que imprime na tela valor de nome.
///
/// \return void
///
///
        void get_nome();

    protected:

    private:
        const unsigned int MINIMO_CARACTERES = 5;   ///< Limite inferior de caracteres
        const unsigned int MAXIMO_CARACTERES = 30;  ///< Limite superior de caracteres
        const int NOME = 2;                         ///< N&uacute;mero identificador para fun&ccedil;&otilde;es howManyPunctuations(std::string, int) e isValidText(std::string, int)

        std::string nome;                           ///< Atributo que armazena nome

/// \brief M&eacute;todo validar nome. <br>
/// implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o do nome, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \throw invalid_argument
///
/// \return void
///
///
        void validar_nome();
};

/// \brief Classe que possibilita obter e modificar n&uacute;mero de conta
///
class Numero{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa numero com valor default 000000-0.
///
        Numero();

/// \brief M&eacute;todo construtor que incializa numero com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_numero() caso inv&aacute;lido
///
/// \param (std::string) valor de numero
///
///
        Numero(std::string);

/// \brief M&eacute;todo destrutor.
///
/// \return virtual
///
///
        virtual ~Numero();

/// \brief M&eacute;todo set numero. Pede ao usu&aacute;rio que insira seu n&uacute;mero, sem d&iacute;gito verificador e o valida.
///
/// \return void
///
///
        void set_numero();

/// \brief M&eacute;todo que imprime na tela valor de nome.
///
/// \return void
///
///
        void get_numero();

    protected:

    private:

/// \brief Atributo que armazena valor de n&uacute;mero de conta.
///
        std::string numero;

/// \brief M&eacute;todo validar n&uacute;mero. <br>
/// implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o do n&uacute;mero, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \throw invalid_argument
///
/// \return void
///
///
        void validar_numero();
};


/// \brief Classe que possibilita obter e modificar prazo de produto
///
class Prazo{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa prazo com valor default "Prazo não estipulado".
///
        Prazo();

/// \brief M&eacute;todo construtor que incializa prazo com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_prazo() caso inv&aacute;lido
///
/// \param (std::string) valor de prazo.
///
///
        Prazo(std::string);

/// \brief M&eacute;todo destrutor.
///
/// \return virtual
///
///
        virtual ~Prazo();

/// \brief M&eacute;todo set prazo. Pede ao usu&aacute;rio que insira o prazo do produto e valida prazo.
///
/// \return void
///
///
        void set_prazo();

/// \brief M&eacute;todo que imprime na tela o valor de prazo.
///
/// \return void
///
///
        void get_prazo();

    protected:

    private:

/// \brief Atributo int que armazena valor de prazo
///
///
        std::string prazo;

/// \brief M&eacute;todo validar prazo. Implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o de prazo, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \return void
///
/// \throw invalid_argument
///
///
        void validar_prazo();
};


/// \brief Classe que possibilita obter e modificar senha de usu&aacute;rio
///
class Senha{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa Senha com default "Senha não definida".
///
        Senha();

/// \brief M&eacute;todo construtor que incializa senha com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_senha() caso inv&aacute;lido
///
/// \param (std::string) valor de senha.
///
///
        Senha(std::string);

/// \brief M&eacute;todo destrutor.
///
/// \return virtual
///
///
        virtual ~Senha();

/// \brief M&eacute;todo set senha. Pede ao usu&aacute;rio que insira sua senha e o valida.
///
/// \return void
///
///
        void set_senha();

/// \brief M&eacute;todo que imprime na tela valor de senha.
///
/// \return void
///
///
        void get_senha();

    protected:

    private:

/// \brief Atributo que armazena valor da senha do usu&acute;rio.
///
        std::string senha;

/// \brief M&eacute;todo validar senha. <br>
/// implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o da senha, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \throw invalid_argument
///
/// \return void
///
///
        void validar_senha();
};



/// \brief Classe que possibilita obter e modificar taxa de produto
///
class Taxa{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa taxa com valor default "taxa não foi definida".
///
        Taxa();

/// \brief M&eacute;todo construtor que incializa taxa com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_taxa() caso inv&aacute;lido
///
/// \param (int) valor de taxa.
///
///
        Taxa(int);

/// \brief M&eacute;todo destrutor.
///
/// \return virtual
///
///
        virtual ~Taxa();

/// \brief M&eacute;todo set taxa. Pede ao usu&aacute;rio que insira a taxa do produto e valida taxa.
///
/// \return void
///
///
        void set_taxa();

/// \brief M&eacute;todo que imprime na tela o valor da taxa.
///
/// \return void
///
///
        void get_taxa();

    protected:

    private:

        const int MINIMO_TAXA = 0;       ///< Lmiite inferior de taxa
        const int MAXIMO_TAXA = 200;    ///< Limite superior de taxa

        int taxa;                       ///< Atributo int que armazena valor de taxa

/// \brief M&eacute;todo validar taxa. Implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o da taxa, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \return void
///
/// \throw invalid_argument
///
///
        void validar_taxa();
};


/// \brief Classe que possibilita obter e modificar valor de aplica&ccedile;&aacute;o
///
class ValorDeAplicacao{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa com valoraplicacao default "valor de aplica&ccedil;&atilde;o não foi definido".
///
        ValorDeAplicacao();

/// \brief M&eacute;todo construtor que incializa valoraplicacao com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_valor_aplicacao() caso inv&aacute;lido
///
/// \param (float) valor de valoraplicacao.
///
///
        ValorDeAplicacao(float);

/// \brief M&eacute;todo destrutor.
///
/// \return virtual
///
///
        virtual ~ValorDeAplicacao();

/// \brief M&eacute;todo set valoraplicacao. Pede ao usu&aacute;rio que insira o valor de aplica&ccedil;&atilde;o do produto e valida valoraplicacao.
///
/// \return void
///
///
        void set_valor_aplicacao();

/// \brief M&eacute;todo que imprime na tela o valor da valoraplicacao.
///
/// \return void
///
///
        void get_valor_aplicacao();

    protected:

    private:

/// \brief
///
///
        const float MINIMO_APLICACAO = 0.00;            ///< Limite inferior da aplica&ccedil;&atilde;o.
        const float MAXIMO_APLICACAO = 1000000.00;      ///< Limite superior da aplica&ccedil;&atilde;o.

        float valoraplicacao;                           ///< Atributo float que armazena valor de valoraplicacao.

/// \brief M&eacute;todo validar valoraplicacao. Implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o do valoraplicacao, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \return void
///
/// \throw invalid_argument
///
///
        void validar_valor_aplicacao();
};


/// \brief Classe que possibilita obter e modificar valor m&iacute;nimo de produto
///
class ValorMinimo{
    public:

/// \brief M&eacute;todo construtor padr&atilde;o. Inicializa valorminimo com valor default "0".
///
        ValorMinimo();

/// \brief M&eacute;todo construtor que incializa valorminimo com valor definido, caso v&aacute;lido. <br>
/// Lan&ccedil;a exce&ccedil;&atilde;o atrav&eacute;s de validar_valor_minimo() caso inv&aacute;lido
///
/// \param (std::string) valor de valorminimo.
///
///
        ValorMinimo(std::string);

/// \brief M&eacute;todo destrutor.
///
/// \return virtual
///
///
        virtual ~ValorMinimo();

/// \brief M&eacute;todo set valorminimo. Pede ao usu&aacute;rio que insira o valorminimo do produto e valida valorminimo.
///
/// \return void
///
///
        void set_valor_minimo();

/// \brief M&eacute;todo que imprime na tela o valor de valorminimo.
///
/// \return void
///
///
        void get_valor_minimo();

    protected:

    private:

/// \brief Atributo std::string que armazena valor de valorminimo
///
///
        std::string valorminimo;

/// \brief M&eacute;todo validar valorminimo. Implica condi&ccedil;&otilde;es para a valida&ccedil;&atilde;o de valorminimo, caso condi&ccedil;&otilde;es n&atilde;o sejam alcan&ccedil;adas &eacute; lan&ccedil;ada exce&ccedil;&atilde;o.
///
/// \return void
///
/// \throw invalid_argument
///
///
        void validar_valor_minimo();
};

#endif // DOMINIOS_H_INCLUDED
