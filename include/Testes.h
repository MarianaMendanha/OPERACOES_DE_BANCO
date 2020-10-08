#ifndef TESTES_H
#define TESTES_H


class TesteCEP
{
    public:
        TesteCEP();
        virtual ~TesteCEP();

        //Testa invalidez de entrada fora dos limites estabelecidos
        void testeCEP();

    protected:

    private:
};

class TesteClasse
{
    public:
        TesteClasse();
        virtual ~TesteClasse();

        //Testa invalidez de classe diferente das siglas estabelecidas
        void testeClasse();

    protected:

    private:
};

class TesteCodigoAgencia
{
    public:
        TesteCodigoAgencia();
        virtual ~TesteCodigoAgencia();

        //Testa códigos com o número correto e incorreto de dígitos
        void testeCodigoAgencia1();

        //Testa invalidez de caracteres que não números
        void testeCodigoAgencia2();

        //Testa invalidez de código 0000
        void testeCodigoAgencia3();

    protected:

    private:
};

class TesteCodigoAplicacao
{
    public:
        TesteCodigoAplicacao();
        virtual ~TesteCodigoAplicacao();

        //Testa códigos com o número correto e incorreto de dígitos
        void testeCodigoAplicacao1();

        //Testa código com apenas algarismos e códigos com outros caracteres
        void testeCodigoAplicacao2();

        //Testa invalidez de código 00000
        void testeCodigoAplicacao3();

    protected:

    private:
};

class TesteCodigoBanco
{
    public:
        TesteCodigoBanco();
        virtual ~TesteCodigoBanco();

        //Testa códigos válidos e inválidos de banco
        void testeCodigoBanco();

    protected:

    private:
};

class TesteCodigoProduto
{
    public:
        TesteCodigoProduto();
        virtual ~TesteCodigoProduto();

        //Testa códigos com o número correto e incorreto de dígitos
        void testeCodigoProduto1();

        //Testa código com apenas algarismos e códigos com outros caracteres
        void testeCodigoProduto2();

        //Testa invalidez de código 000
        void testeCodigoProduto3();

    protected:

    private:
};

class TesteCPF
{
    public:
        TesteCPF();
        virtual ~TesteCPF();

        //Testa CPF com dígito verificador incorreto
        void testeCPF1();

        //Testa CPF com e sem letras
        void testeCPF2();

        //Testa CPF com 11 dígitos e CPF com mais de 11 dígitos
        void testeCPF3();

        //Testa CPF com 11 dígitos e CPF com menoss de 11 dígitos
        void testeCPF4();

    protected:

    private:
};

class TesteData
{
    public:
        TesteData();
        virtual ~TesteData();

        //Testa invalidez do dia 31 em meses com menos de 31 dias
        void testeData1();

        //Testa invalidez de meses maiores que 12
        void testeData2();

        //Testa invalidez de dia 29 de fevereiro em anos não bissextos
        void testeData3();

        //Testa invalidez de anos acima de 2099
        void testeData4();

        //Testa invalidez de caracteres que não algarismos na data
        void testeData5();

    protected:

    private:
};

class TesteEmissor
{
    public:
        TesteEmissor();
        virtual ~TesteEmissor();

        //Testa invalidez de caracteres especiais que não espaço, ponto ou traço
        void testeEmissor1();

        //Testa invalidez de termo iniciado por letra minúscula
        void testeEmissor2();

        //Testa invalidez de sinais de pontuação em sequência
        void testeEmissor3();

        //Testa invalidez de emissor com mais de 30 caracteres
        void testeEmissor4();

        //Testa invalidez de emissor com menos de 5 caracteres
        void testeEmissor5();

    protected:

    private:
};

class TesteEndereco
{
    public:
        TesteEndereco();
        virtual ~TesteEndereco();

        //Testa invalidez de traços no endereço
        void testeEndereco1();

        //Testa invalidez de pontuações em sequência
        void testeEndereco2();

        //Testa invalidez de termo iniciado por letra minúscula
        void testeEndereco3();

        //Testa invalidez de endereço com mais de 20 caracteres
        void testeEndereco4();

        //Testa invalidez de endereço com menos de 5 caracteres
        void testeEndereco5();

    protected:

    private:
};

class TesteHorario
{
    public:
        TesteHorario();
        virtual ~TesteHorario();

        //Testa invalidez de minutagem superior a 59
        void testeHorario1();

        //Testa invalidez de letras na string
        void testeHorario2();

        //Testa invalidez de hora superior a 17
        void testeHorario3();

        //Testa invalidez de hora inferior a 13
        void testeHorario4();

    protected:

    private:
};

class TesteNome
{
    public:
        TesteNome();
        virtual ~TesteNome();

        //Testa invalidez de termo iniciado por letra minúscula
        void testeNome1();

        //Testa invalidez de espaços em sequência
        void testeNome2();

        //Testa invalidez de números na string
        void testeNome3();

        //Testa invalidez de pontos na string
        void testeNome4();

        //Testa invalidez de nome com mais de 30 caracteres
        void testeNome5();

        //Testa invalidez de nome com menos de 5 caracteres
        void testeNome6();

    protected:

    private:
};

class TesteNumero
{
    public:
        TesteNumero();
        virtual ~TesteNumero();

        //Testa invalidez de entrada com mais de 6 caracteres
        void testeNumero1();

        //Testa invalidez de entrada com menos de 6 caracteres
        void testeNumero2();

        //Testa invalidez de entrada com algo diferente de números
        void testeNumero3();

    protected:

    private:
};

class TestePrazo
{
    public:
        TestePrazo();
        virtual ~TestePrazo();

        //Testa invalidez de caracteres que não números
        void testePrazo1();

        //Testa invalidez de números não dentro dos valores estabelecidos
        void testePrazo2();

    protected:

    private:
};

class TesteSenha
{
    public:
        TesteSenha();
        virtual ~TesteSenha();

        //Testa invalidez de caracteres que não números
        void testeSenha1();

        //Testa invalidez de números repetidos
        void testeSenha2();

    protected:

    private:
};

class TesteTaxa
{
    public:
        TesteTaxa();
        virtual ~TesteTaxa();

        //Testa invalidez de valores fora dos limites estabelecidos
        void testeTaxa();

    protected:

    private:
};

class TesteValorAplicacao
{
    public:
        TesteValorAplicacao();
        virtual ~TesteValorAplicacao();

        //Testa invalidez de valores fora do intervalo estabelecido
        void testeValorAplicacao();

    protected:

    private:
};

class TesteValorMinimo
{
    public:
        TesteValorMinimo();
        virtual ~TesteValorMinimo();

        //Testa invalidez de caracteres que não números
        void testeValorMinimo1();

        //Teste invalidez de números fora dos limites estabelecidos
        void testeValorMinimo2();

    protected:

    private:
};

#endif // TESTES_H
