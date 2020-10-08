#include <iostream>
#include "Dominios.h"
#include "Testes.h"

TesteCEP::TesteCEP()
{
    //ctor
}

TesteCEP::~TesteCEP()
{
    //dtor
}

void TesteCEP::testeCEP(){

    CEP *p1 = new CEP(1000000);
    p1->get_cep();
    delete p1;
    CEP *p2 = new CEP(5999999);
    p2->get_cep();
    delete p2;
    CEP *p3 = new CEP(6000000);
    p3->get_cep();
    delete p3;
}

TesteClasse::TesteClasse()
{
    //ctor
}

TesteClasse::~TesteClasse()
{
    //dtor
}

void TesteClasse::testeClasse(){

    Classe *p1 = new Classe("CDB");
    p1->get_classe();
    delete p1;
    Classe *p2 = new Classe("LCA");
    p2->get_classe();
    delete p2;
    Classe *p3 = new Classe("AAA");
    p3->get_classe();
    delete p3;
}

TesteCodigoAgencia::TesteCodigoAgencia()
{
    //ctor
}

TesteCodigoAgencia::~TesteCodigoAgencia()
{
    //dtor
}

void TesteCodigoAgencia::testeCodigoAgencia1(){

    CodigoDeAgencia *p1 = new CodigoDeAgencia("0001");
    p1->get_codigo_agencia();
    delete p1;
    CodigoDeAgencia *p2 = new CodigoDeAgencia("1000");
    p2->get_codigo_agencia();
    delete p2;
    CodigoDeAgencia *p3 = new CodigoDeAgencia("00001");
    p3->get_codigo_agencia();
    delete p3;
}

void TesteCodigoAgencia::testeCodigoAgencia2(){

    CodigoDeAgencia *p1 = new CodigoDeAgencia("0002");
    p1->get_codigo_agencia();
    delete p1;
    CodigoDeAgencia *p2 = new CodigoDeAgencia("2000");
    p2->get_codigo_agencia();
    delete p2;
    CodigoDeAgencia *p3 = new CodigoDeAgencia("00a.");
    p3->get_codigo_agencia();
    delete p3;
}

void TesteCodigoAgencia::testeCodigoAgencia3(){

    CodigoDeAgencia *p1 = new CodigoDeAgencia("0003");
    p1->get_codigo_agencia();
    delete p1;
    CodigoDeAgencia *p2 = new CodigoDeAgencia("3000");
    p2->get_codigo_agencia();
    delete p2;
    CodigoDeAgencia *p3 = new CodigoDeAgencia("0000");
    p3->get_codigo_agencia();
    delete p3;
}

TesteCodigoAplicacao::TesteCodigoAplicacao()
{
    //ctor
}

TesteCodigoAplicacao::~TesteCodigoAplicacao()
{
    //dtor
}

void TesteCodigoAplicacao::testeCodigoAplicacao1(){

    CodigoDeAplicacao *p1 = new CodigoDeAplicacao("00001");
    p1->get_codigo_aplicacao();
    delete p1;
    CodigoDeAplicacao *p2 = new CodigoDeAplicacao("10000");
    p2->get_codigo_aplicacao();
    delete p2;
    CodigoDeAplicacao *p3 = new CodigoDeAplicacao("000001");
    p3->get_codigo_aplicacao();
    delete p3;
}

void TesteCodigoAplicacao::testeCodigoAplicacao2(){

    CodigoDeAplicacao *p1 = new CodigoDeAplicacao("00002");
    p1->get_codigo_aplicacao();
    delete p1;
    CodigoDeAplicacao *p2 = new CodigoDeAplicacao("20000");
    p2->get_codigo_aplicacao();
    delete p2;
    CodigoDeAplicacao *p3 = new CodigoDeAplicacao("000a.");
    p3->get_codigo_aplicacao();
    delete p3;
}

void TesteCodigoAplicacao::testeCodigoAplicacao3(){

    CodigoDeAplicacao *p1 = new CodigoDeAplicacao("00003");
    p1->get_codigo_aplicacao();
    delete p1;
    CodigoDeAplicacao *p2 = new CodigoDeAplicacao("30000");
    p2->get_codigo_aplicacao();
    delete p2;
    CodigoDeAplicacao *p3 = new CodigoDeAplicacao("00000");
    p3->get_codigo_aplicacao();
    delete p3;
}

TesteCodigoBanco::TesteCodigoBanco()
{
    //ctor
}

TesteCodigoBanco::~TesteCodigoBanco()
{
    //dtor
}

void TesteCodigoBanco::testeCodigoBanco(){

    CodigoDeBanco *p1 = new CodigoDeBanco("001");
    p1->get_codigo_banco();
    delete p1;
    CodigoDeBanco *p2 = new CodigoDeBanco("033");
    p2->get_codigo_banco();
    delete p2;
    CodigoDeBanco *p3 = new CodigoDeBanco("a01");
    p3->get_codigo_banco();
    delete p3;
}

TesteCodigoProduto::TesteCodigoProduto()
{
    //ctor
}

TesteCodigoProduto::~TesteCodigoProduto()
{
    //dtor
}

void TesteCodigoProduto::testeCodigoProduto1(){

    CodigoDeProduto *p1 = new CodigoDeProduto("001");
    p1->get_codigo_produto();
    delete p1;
    CodigoDeProduto *p2 = new CodigoDeProduto("100");
    p2->get_codigo_produto();
    delete p2;
    CodigoDeProduto *p3 = new CodigoDeProduto("0001");
    p3->get_codigo_produto();
    delete p3;
}

void TesteCodigoProduto::testeCodigoProduto2(){

    CodigoDeProduto *p1 = new CodigoDeProduto("002");
    p1->get_codigo_produto();
    delete p1;
    CodigoDeProduto *p2 = new CodigoDeProduto("200");
    p2->get_codigo_produto();
    delete p2;
    CodigoDeProduto *p3 = new CodigoDeProduto("0a.");
    p3->get_codigo_produto();
    delete p3;
}

void TesteCodigoProduto::testeCodigoProduto3(){

    CodigoDeProduto *p1 = new CodigoDeProduto("003");
    p1->get_codigo_produto();
    delete p1;
    CodigoDeProduto *p2 = new CodigoDeProduto("300");
    p2->get_codigo_produto();
    delete p2;
    CodigoDeProduto *p3 = new CodigoDeProduto("000");
    p3->get_codigo_produto();
    delete p3;
}

TesteCPF::TesteCPF()
{
    //ctor
}

TesteCPF::~TesteCPF()
{
    //dtor
}

void TesteCPF::testeCPF1(){

    CPF *p1 = new CPF("00000000000");
    p1->get_cpf();
    delete p1;
    CPF *p2 = new CPF("06245794170");
    p2->get_cpf();
    delete p2;
    CPF *p3 = new CPF("06245794171");
    p3->get_cpf();
    delete p3;
}

void TesteCPF::testeCPF2(){

    CPF *p1 = new CPF("00000000000");
    p1->get_cpf();
    delete p1;
    CPF *p2 = new CPF("06245794170");
    p2->get_cpf();
    delete p2;
    CPF *p3 = new CPF("a6245794170");
    p3->get_cpf();
    delete p3;
}

void TesteCPF::testeCPF3(){

    CPF *p1 = new CPF("00000000000");
    p1->get_cpf();
    delete p1;
    CPF *p2 = new CPF("06245794170");
    p2->get_cpf();
    delete p2;
    CPF *p3 = new CPF("062457941700");
    p3->get_cpf();
    delete p3;
}

void TesteCPF::testeCPF4(){

    CPF *p1 = new CPF("00000000000");
    p1->get_cpf();
    delete p1;
    CPF *p2 = new CPF("06245794170");
    p2->get_cpf();
    delete p2;
    CPF *p3 = new CPF("0624579417");
    p3->get_cpf();
    delete p3;
}

TesteData::TesteData()
{
    //ctor
}

TesteData::~TesteData()
{
    //dtor
}

void TesteData::testeData1(){

    Data *p1 = new Data("1", "07", "2021");
    p1->get_data();
    delete p1;
    Data *p2 = new Data("29", "2", "2024");
    p2->get_data();
    delete p2;
    Data *p3 = new Data("31", "04", "2099");
    p3->get_data();
    delete p3;
}

void TesteData::testeData2(){

    Data *p1 = new Data("1", "07", "2021");
    p1->get_data();
    delete p1;
    Data *p2 = new Data("29", "2", "2024");
    p2->get_data();
    delete p2;
    Data *p3 = new Data("30", "13", "2099");
    p3->get_data();
    delete p3;
}

void TesteData::testeData3(){

    Data *p1 = new Data("1", "07", "2021");
    p1->get_data();
    delete p1;
    Data *p2 = new Data("29", "2", "2024");
    p2->get_data();
    delete p2;
    Data *p3 = new Data("29", "02", "2021");
    p3->get_data();
    delete p3;
}

void TesteData::testeData4(){

    Data *p1 = new Data("1", "07", "2021");
    p1->get_data();
    delete p1;
    Data *p2 = new Data("29", "2", "2024");
    p2->get_data();
    delete p2;
    Data *p3 = new Data("30", "04", "2100");
    p3->get_data();
    delete p3;
}

void TesteData::testeData5(){

    Data *p1 = new Data("1", "07", "2021");
    p1->get_data();
    delete p1;
    Data *p2 = new Data("29", "2", "2024");
    p2->get_data();
    delete p2;
    Data *p3 = new Data("0a", "04", "2020");
    p3->get_data();
    delete p3;
}

TesteEmissor::TesteEmissor()
{
    //ctor
}

TesteEmissor::~TesteEmissor()
{
    //dtor
}

void TesteEmissor::testeEmissor1(){

    Emissor *p1 = new Emissor("Emissor Numero 1-2.5");
    p1->get_emissor();
    delete p1;
    Emissor *p2 = new Emissor("Emissor Um");
    p2->get_emissor();
    delete p2;
    Emissor *p3 = new Emissor("Emissor &");
    p3->get_emissor();
    delete p3;
}

void TesteEmissor::testeEmissor2(){

    Emissor *p1 = new Emissor("Emissor Numero 1-2.5");
    p1->get_emissor();
    delete p1;
    Emissor *p2 = new Emissor("Emissor Um");
    p2->get_emissor();
    delete p2;
    Emissor *p3 = new Emissor("Emissor dois");
    p3->get_emissor();
    delete p3;
}

void TesteEmissor::testeEmissor3(){

    Emissor *p1 = new Emissor("Emissor Numero 1-2.5");
    p1->get_emissor();
    delete p1;
    Emissor *p2 = new Emissor("Emissor Um");
    p2->get_emissor();
    delete p2;
    Emissor *p3 = new Emissor("Emissor--Dois");
    p3->get_emissor();
    delete p3;
}

void TesteEmissor::testeEmissor4(){

    Emissor *p1 = new Emissor("Emissor Numero 1-2.5");
    p1->get_emissor();
    delete p1;
    Emissor *p2 = new Emissor("Emissor Um");
    p2->get_emissor();
    delete p2;
    Emissor *p3 = new Emissor("Emissores Numero Mil E Duzentos");
    p3->get_emissor();
    delete p3;
}

void TesteEmissor::testeEmissor5(){

    Emissor *p1 = new Emissor("Emissor Numero 1-2.5");
    p1->get_emissor();
    delete p1;
    Emissor *p2 = new Emissor("Emissor Um");
    p2->get_emissor();
    delete p2;
    Emissor *p3 = new Emissor("Emis");
    p3->get_emissor();
    delete p3;
}

TesteEndereco::TesteEndereco()
{
    //ctor
}

TesteEndereco::~TesteEndereco()
{
    //dtor
}

void TesteEndereco::testeEndereco1(){

    Endereco *p1 = new Endereco("Endereco Numero 1.5");
    p1->get_endereco();
    delete p1;
    Endereco *p2 = new Endereco("Endereco Um");
    p2->get_endereco();
    delete p2;
    Endereco *p3 = new Endereco("Endereco-Dois");
    p3->get_endereco();
    delete p3;
}

void TesteEndereco::testeEndereco2(){

    Endereco *p1 = new Endereco("Endereco Numero 1.5");
    p1->get_endereco();
    delete p1;
    Endereco *p2 = new Endereco("Endereco.Um");
    p2->get_endereco();
    delete p2;
    Endereco *p3 = new Endereco("Endereco..Dois");
    p3->get_endereco();
    delete p3;
}

void TesteEndereco::testeEndereco3(){

    Endereco *p1 = new Endereco("Endereco Numero 1.5");
    p1->get_endereco();
    delete p1;
    Endereco *p2 = new Endereco("Endereco.Um");
    p2->get_endereco();
    delete p2;
    Endereco *p3 = new Endereco("Endereco dois");
    p3->get_endereco();
    delete p3;
}

void TesteEndereco::testeEndereco4(){

    Endereco *p1 = new Endereco("Endereco Numero 1.5");
    p1->get_endereco();
    delete p1;
    Endereco *p2 = new Endereco("Endereco.Um");
    p2->get_endereco();
    delete p2;
    Endereco *p3 = new Endereco("Endereco Numero Cinco");
    p3->get_endereco();
    delete p3;
}

void TesteEndereco::testeEndereco5(){

    Endereco *p1 = new Endereco("Endereco Numero 1.5");
    p1->get_endereco();
    delete p1;
    Endereco *p2 = new Endereco("Endereco.Um");
    p2->get_endereco();
    delete p2;
    Endereco *p3 = new Endereco("Ende");
    p3->get_endereco();
    delete p3;
}

TesteHorario::TesteHorario()
{
    //ctor
}

TesteHorario::~TesteHorario()
{
    //dtor
}

void TesteHorario::testeHorario1(){

    Horario *p1 = new Horario("13", "1");
    p1->get_horario();
    delete p1;
    Horario *p2 = new Horario("14", "00");
    p2->get_horario();
    delete p2;
    Horario *p3 = new Horario("15", "60");
    p3->get_horario();
    delete p3;
}

void TesteHorario::testeHorario2(){

    Horario *p1 = new Horario("13", "1");
    p1->get_horario();
    delete p1;
    Horario *p2 = new Horario("14", "00");
    p2->get_horario();
    delete p2;
    Horario *p3 = new Horario("15", "0a");
    p3->get_horario();
    delete p3;
}

void TesteHorario::testeHorario3(){

    Horario *p1 = new Horario("13", "1");
    p1->get_horario();
    delete p1;
    Horario *p2 = new Horario("14", "00");
    p2->get_horario();
    delete p2;
    Horario *p3 = new Horario("18", "00");
    p3->get_horario();
    delete p3;
}

void TesteHorario::testeHorario4(){

    Horario *p1 = new Horario("13", "1");
    p1->get_horario();
    delete p1;
    Horario *p2 = new Horario("14", "00");
    p2->get_horario();
    delete p2;
    Horario *p3 = new Horario("12", "00");
    p3->get_horario();
    delete p3;
}

TesteNome::TesteNome()
{
    //ctor
}

TesteNome::~TesteNome()
{
    //dtor
}

void TesteNome::testeNome1(){

    Nome *p1 = new Nome("Nome Abcdefg");
    p1->get_nome();
    delete p1;
    Nome *p2 = new Nome("Nome Um");
    p2->get_nome();
    delete p2;
    Nome *p3 = new Nome("Nome dois");
    p3->get_nome();
    delete p3;
}

void TesteNome::testeNome2(){

    Nome *p1 = new Nome("Nome Abcdefg");
    p1->get_nome();
    delete p1;
    Nome *p2 = new Nome("Nome Um");
    p2->get_nome();
    delete p2;
    Nome *p3 = new Nome("Nome  Dois");
    p3->get_nome();
    delete p3;
}

void TesteNome::testeNome3(){

    Nome *p1 = new Nome("Nome Abcdefg");
    p1->get_nome();
    delete p1;
    Nome *p2 = new Nome("Nome Um");
    p2->get_nome();
    delete p2;
    Nome *p3 = new Nome("Nome 2");
    p3->get_nome();
    delete p3;
}

void TesteNome::testeNome4(){

    Nome *p1 = new Nome("Nome Abcdefg");
    p1->get_nome();
    delete p1;
    Nome *p2 = new Nome("Nome Um");
    p2->get_nome();
    delete p2;
    Nome *p3 = new Nome("Nome Um.");
    p3->get_nome();
    delete p3;
}

void TesteNome::testeNome5(){

    Nome *p1 = new Nome("Nome Abcdefg");
    p1->get_nome();
    delete p1;
    Nome *p2 = new Nome("Nome Um");
    p2->get_nome();
    delete p2;
    Nome *p3 = new Nome("Lucia de Fatima Valerio Da Silva");
    p3->get_nome();
    delete p3;
}

void TesteNome::testeNome6(){

    Nome *p1 = new Nome("Nome Abcdefg");
    p1->get_nome();
    delete p1;
    Nome *p2 = new Nome("Nome Um");
    p2->get_nome();
    delete p2;
    Nome *p3 = new Nome("Nome");
    p3->get_nome();
    delete p3;
}

TesteNumero::TesteNumero()
{
    //ctor
}

TesteNumero::~TesteNumero()
{
    //dtor
}

void TesteNumero::testeNumero1(){

    Numero *p1 = new Numero("000000");
    p1->get_numero();
    delete p1;
    Numero *p2 = new Numero("023437");
    p2->get_numero();
    delete p2;
    Numero *p3 = new Numero("12345");
    p3->get_numero();
    delete p3;
}

void TesteNumero::testeNumero2(){

    Numero *p1 = new Numero("000000");
    p1->get_numero();
    delete p1;
    Numero *p2 = new Numero("043437");
    p2->get_numero();
    delete p2;
    Numero *p3 = new Numero("1234567");
    p3->get_numero();
    delete p3;
}

void TesteNumero::testeNumero3(){

    Numero *p1 = new Numero("000000");
    p1->get_numero();
    delete p1;
    Numero *p2 = new Numero("888888");
    p2->get_numero();
    delete p2;
    Numero *p3 = new Numero("a00000");
    p3->get_numero();
    delete p3;
}

TestePrazo::TestePrazo()
{
    //ctor
}

TestePrazo::~TestePrazo()
{
    //dtor
}

void TestePrazo::testePrazo1(){

    Prazo *p1 = new Prazo("6");
    p1->get_prazo();
    delete p1;
    Prazo *p2 = new Prazo("12");
    p2->get_prazo();
    delete p2;
    Prazo *p3 = new Prazo("a");
    p3->get_prazo();
    delete p3;
}

void TestePrazo::testePrazo2(){

    Prazo *p1 = new Prazo("66");
    p1->get_prazo();
    delete p1;
    Prazo *p2 = new Prazo("72");
    p2->get_prazo();
    delete p2;
    Prazo *p3 = new Prazo("80");
    p3->get_prazo();
    delete p3;
}

TesteSenha::TesteSenha()
{
    //ctor
}

TesteSenha::~TesteSenha()
{
    //dtor
}

void TesteSenha::testeSenha1(){

    Senha*p1 = new Senha("123456");
    p1->get_senha();
    delete p1;
    Senha*p2 = new Senha("091526");
    p2->get_senha();
    delete p2;
    Senha*p3 = new Senha("a12345");
    p3->get_senha();
    delete p3;
}

void TesteSenha::testeSenha2(){

    Senha*p1 = new Senha("123456");
    p1->get_senha();
    delete p1;
    Senha*p2 = new Senha("091526");
    p2->get_senha();
    delete p2;
    Senha*p3 = new Senha("123451");
    p3->get_senha();
    delete p3;
}

TesteTaxa::TesteTaxa()
{
    //ctor
}

TesteTaxa::~TesteTaxa()
{
    //dtor
}

void TesteTaxa::testeTaxa(){

    Taxa*p1 = new Taxa(0);
    p1->get_taxa();
    delete p1;
    Taxa*p2 = new Taxa(8);
    p2->get_taxa();
    delete p2;
    Taxa*p3 = new Taxa(201);
    p3->get_taxa();
    delete p3;
}

TesteValorAplicacao::TesteValorAplicacao()
{
    //ctor
}

TesteValorAplicacao::~TesteValorAplicacao()
{
    //dtor
}

void TesteValorAplicacao::testeValorAplicacao(){

    ValorDeAplicacao*p1 = new ValorDeAplicacao(0.00);
    p1->get_valor_aplicacao();
    delete p1;
    ValorDeAplicacao*p2 = new ValorDeAplicacao(1000000.00);
    p2->get_valor_aplicacao();
    delete p2;
    ValorDeAplicacao*p3 = new ValorDeAplicacao(2000000.00);
    p3->get_valor_aplicacao();
    delete p3;
}

TesteValorMinimo::TesteValorMinimo()
{
    //ctor
}

TesteValorMinimo::~TesteValorMinimo()
{
    //dtor
}

void TesteValorMinimo::testeValorMinimo1(){

    ValorMinimo*p1 = new ValorMinimo("5000");
    p1->get_valor_minimo();
    delete p1;
    ValorMinimo*p2 = new ValorMinimo("50000");
    p2->get_valor_minimo();
    delete p2;
    ValorMinimo*p3 = new ValorMinimo("a");
    p3->get_valor_minimo();
    delete p3;
}

void TesteValorMinimo::testeValorMinimo2(){

    ValorMinimo*p1 = new ValorMinimo("1000");
    p1->get_valor_minimo();
    delete p1;
    ValorMinimo*p2 = new ValorMinimo("10000");
    p2->get_valor_minimo();
    delete p2;
    ValorMinimo*p3 = new ValorMinimo("1200");
    p3->get_valor_minimo();
    delete p3;
}
