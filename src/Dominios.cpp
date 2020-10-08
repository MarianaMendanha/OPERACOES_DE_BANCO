#include <iostream>
#include <string>
#include <stdexcept>
#include "Functions.h"
#include "Dominios.h"


CEP::CEP()
{
    cep = LIMITE_INFERIORA_SP;
}

CEP::CEP(int valor)
{
    cep = valor;
    validar_cep();
}

CEP::~CEP()
{
    //dtor
}

void CEP::set_cep(){
    std::cout << "Digite seu CEP (apenas números): " << std::endl;
    std::cin >> cep;
    clearBuffer();
    validar_cep();
    return;
}

void CEP::get_cep(){
    std::cout << "CEP: " << cep << std::endl;
    return;
}

void CEP::validar_cep(){
    if ((cep >= LIMITE_INFERIORA_SP && cep <= LIMITE_SUPERIORA_SP) || (cep >= LIMITE_INFERIORB_SP && cep <= LIMITE_SUPERIORB_SP) || (cep >= LIMITE_INFERIOR_RJ && cep <= LIMITE_SUPERIOR_RJ) || (cep >= LIMITE_INFERIOR_BSB && cep <= LIMITE_SUPERIOR_BSB) || (cep >= LIMITE_INFERIORA_FOR && cep <= LIMITE_SUPERIORA_FOR) || (cep >= LIMITE_INFERIORB_FOR && cep <= LIMITE_SUPERIORB_FOR))
        return;

    throw std::invalid_argument("CEP inválido!");
}


Classe::Classe(){
    classe = "CDB";
}

Classe::Classe(std::string text){

    classe = text;
    validar_classe();
}

Classe::~Classe(){
    //dtor
}

void Classe::set_classe(){
    std::cout << "Defina a classe do produto:" << std::endl;
    getline(std::cin, classe, '\n');
    validar_classe();
    return;
}

void Classe::get_classe(){
    std::cout << "Classe: " << classe << std::endl;
    return;
}

void Classe::validar_classe(){
    if (classe != "CDB" && classe != "LCA" && classe != "LCI" && classe != "LF" && classe != "LC")
        throw std::invalid_argument("Classe inválida!");

    return;
}

CodigoDeAgencia::CodigoDeAgencia(){
    codigoagencia = "0001";
}

CodigoDeAgencia::CodigoDeAgencia(std::string text){

    codigoagencia = text;
    validar_codigo_agencia();
}

CodigoDeAgencia::~CodigoDeAgencia(){
    //dtor
}

void CodigoDeAgencia::set_codigo_agencia(){
    std::cout << "Digite o Código de Agência: " << std::endl;
    getline(std::cin, codigoagencia, '\n');
    validar_codigo_agencia();
    return;
}

void CodigoDeAgencia::get_codigo_agencia(){
    std::cout << "Código de Agência: " << codigoagencia << std::endl;
    return;
}

void CodigoDeAgencia::validar_codigo_agencia(){
    if (codigoagencia.size() != 4 || howManyNumbers(codigoagencia) != 4 || (codigoagencia[0] == '0' && codigoagencia[1] == '0' && codigoagencia[2] == '0' && codigoagencia[3] == '0'))
        throw std::invalid_argument("Código de Agência inválido!");
    return;
}

CodigoDeAplicacao::CodigoDeAplicacao(){
    codigoaplicacao = "00001";
}

CodigoDeAplicacao::CodigoDeAplicacao(std::string text){

    codigoaplicacao = text;
    validar_codigo_aplicacao();
}

CodigoDeAplicacao::~CodigoDeAplicacao(){
    //dtor
}

void CodigoDeAplicacao::set_codigo_aplicacao(){
    std::cout << "Digite o Código de Aplicação: " << std::endl;
    getline(std::cin, codigoaplicacao, '\n');
    validar_codigo_aplicacao();
    return;
}

void CodigoDeAplicacao::get_codigo_aplicacao(){
    std::cout << "Código de Aplicação: " << codigoaplicacao << std::endl;
    return;
}

void CodigoDeAplicacao::validar_codigo_aplicacao(){
    if (codigoaplicacao.size() != 5 || howManyNumbers(codigoaplicacao) != 5 || (codigoaplicacao[0] == '0' && codigoaplicacao[1] == '0' && codigoaplicacao[2] == '0' && codigoaplicacao[3] == '0' && codigoaplicacao[4] == '0'))
        throw std::invalid_argument("Código de Aplicação inválido!");
    return;
}

CodigoDeBanco::CodigoDeBanco(){
    codigobanco = BANCO_DO_BRASIL;
}

CodigoDeBanco::CodigoDeBanco(std::string text){

    codigobanco = text;
    validar_codigo_banco();
}

CodigoDeBanco::~CodigoDeBanco(){
    //dtor
}

void CodigoDeBanco::set_codigo_banco(){
    std::cout << "Digite o Código de Banco: " << std::endl;
    getline(std::cin, codigobanco, '\n');
    validar_codigo_banco();
    return;
}

void CodigoDeBanco::get_codigo_banco(){
    std::cout << "Código de Banco: " << codigobanco << std::endl;
    return;
}

void CodigoDeBanco::validar_codigo_banco(){
    if (codigobanco != BANCO_DO_BRASIL && codigobanco != SANTANDER && codigobanco != CAIXA && codigobanco != BRADESCO && codigobanco != ITAU)
        throw std::invalid_argument("Código de Banco inválido!");
    return;
}

CodigoDeProduto::CodigoDeProduto(){
    codigoproduto = "001";
}

CodigoDeProduto::CodigoDeProduto(std::string text){

    codigoproduto = text;
    validar_codigo_produto();
}

CodigoDeProduto::~CodigoDeProduto(){
    //dtor
}

void CodigoDeProduto::set_codigo_produto(){
    std::cout << "Digite o Código de Produto: " << std::endl;
    getline(std::cin, codigoproduto, '\n');
    validar_codigo_produto();
    return;
}

void CodigoDeProduto::get_codigo_produto(){
    std::cout << "Código de Produto: " << codigoproduto << std::endl;
    return;
}

void CodigoDeProduto::validar_codigo_produto(){
    if (codigoproduto.size() != 3 || howManyNumbers(codigoproduto) != 3 || (codigoproduto[0] == '0' && codigoproduto[1] == '0' && codigoproduto[2] == '0'))
        throw std::invalid_argument("Código de Produto inválido!");
    return;
}

CPF::CPF(){
    cpf = "000.000.000-00";
}

CPF::CPF(std::string text){

    cpf = text;
    validar_cpf();
}

CPF::~CPF(){
    //dtor
}

void CPF::set_cpf(){
    std::cout << "Digite seu CPF (apenas números): " << std::endl;
    getline(std::cin, cpf, '\n');
    validar_cpf();

    return;
}

void CPF::get_cpf(){
    std::cout << "CPF: " << cpf << std::endl;
    return;
}

void CPF::validar_cpf(){
    char digito1 = digitoVerificador(cpf, 9);
    char digito2 = digitoVerificador(cpf, 10);

    if (cpf.size() != 11 || howManyNumbers(cpf) != 11 || cpf[9] != digito1 || cpf[10] != digito2)
        throw std::invalid_argument("CPF inválido.");

    cpf.insert(3, ".");
    cpf.insert(7, ".");
    cpf.insert(11, "-");
    return;
}

Data::Data(){
    data = "01/01/2020";
}

Data::Data(std::string dia, std::string mes, std::string ano){

    validar_data(dia, mes, ano);
}

Data::~Data(){
    //dtor
}

void Data::set_data(){
    std::string dia, mes, ano;

    std::cout << "Digite o dia:" << std::endl;
    getline(std::cin, dia, '\n');
    std::cout << "Digite o mês (apenas números):" << std::endl;
    getline(std::cin, mes, '\n');
    std::cout << "Digite o ano:" << std::endl;
    getline(std::cin, ano, '\n');
    validar_data(dia, mes, ano);
    return;
}

void Data::get_data(){
    std::cout << "Data: "<< data << std::endl;
    return;
}

void Data::validar_data(std::string dia, std::string mes, std::string ano){

    if (dia.size() == 1)
        dia.insert(0, "0");

    if (mes.size() == 1)
        mes.insert(0, "0");

    if (howManyNumbers(dia) != 2 || howManyNumbers(mes) != 2 || howManyNumbers (ano) != 4)
        throw std::invalid_argument("Data inválida!");

    int auxiliar_dia = stoi(dia);
    int auxiliar_mes = stoi(mes);
    int auxiliar_ano = stoi(ano);

    if (auxiliar_ano < MINIMO_ANO || auxiliar_ano > MAXIMO_ANO || (!isValidDate(auxiliar_dia, auxiliar_mes)) || (!isLeapYear(auxiliar_ano) && auxiliar_mes == 2 && auxiliar_dia == 29))
        throw std::invalid_argument("Data inválida!");

    data = dia + "/" + mes + "/" + ano;

    return;
}

Emissor::Emissor(){
    emissor = "Sem Emissor";
}

Emissor::Emissor(std::string text){

    emissor = text;
    validar_emissor();
}

Emissor::~Emissor(){
    //dtor
}

void Emissor::set_emissor(){
    std::cout << "Digite o emissor: " << std::endl;
    getline(std::cin, emissor, '\n');
    validar_emissor();
    return;
}

void Emissor::get_emissor(){
    std::cout << "Emissor: " << emissor << std::endl;
    return;
}

void Emissor::validar_emissor(){

    if (emissor.size() < MINIMO_CARACTERES || emissor.size() > MAXIMO_CARACTERES || !isValidText(emissor, EMISSOR) || !isValidPunctuation(emissor) || !isValidCapitalLetter(emissor))
        throw std::invalid_argument ("Emissor inválido!");
    return;
}

Endereco::Endereco(){
    endereco = "Sem Endereço";
}

Endereco::Endereco(std::string text){

    endereco = text;
    validar_endereco();
}

Endereco::~Endereco(){
    //dtor
}

void Endereco::set_endereco(){
    std::cout << "Digite seu endereço: " << std::endl;
    getline(std::cin, endereco, '\n');
    validar_endereco();
    return;
}

void Endereco::get_endereco(){
    std::cout << "Endereço: " << endereco << std::endl;
    return;
}

void Endereco::validar_endereco(){
    if (endereco.size() < MINIMO_CARACTERES || endereco.size() > MAXIMO_CARACTERES || !isValidText(endereco, ENDERECO) || !isValidPunctuation(endereco) || !isValidCapitalLetter(endereco))
        throw std::invalid_argument ("Endereço inválido!");
    return;
}

Horario::Horario(){
    horario = "13:00";
}

Horario::Horario(std::string horas, std::string minutos){

    if(minutos.size() == 1)
        minutos.insert(0, "0");

    validar_horario(horas, minutos);
    horario = horas + ":" + minutos;
}

Horario::~Horario(){
    //dtor
}

void Horario::set_horario(){
    std::string horas, minutos;

    std::cout << "Digite as horas: " << std::endl;
    getline(std::cin, horas, '\n');
    std::cout << "Digite os minutos: " << std::endl;
    getline(std::cin, minutos, '\n');

    if(minutos.size() == 1)
        minutos.insert(0, "0");

    validar_horario(horas, minutos);
    horario = horas + ":" + minutos;
    return;
}

void Horario::get_horario(){
    std::cout << "Horário: " << horario << std::endl;
    return;
}

void Horario::validar_horario(std::string horas, std::string minutos){

    if (howManyNumbers(horas) != 2 || howManyNumbers(minutos) != 2)
        throw std::invalid_argument("Horário inválido!");

    int auxiliar_horas = stoi(horas);
    int auxiliar_minutos = stoi(minutos);

    if(auxiliar_horas < MINIMO_HORARIO || auxiliar_horas > MAXIMO_HORARIO || (auxiliar_horas == MAXIMO_HORARIO && auxiliar_minutos != 0) || auxiliar_minutos > 59)
        throw std::invalid_argument("Horário inválido");

    return;
}

Nome::Nome(){
    nome = "Sem Nome";
}

Nome::Nome(std::string text){

    nome = text;
    validar_nome();
}

Nome::~Nome(){
    //dtor
}

void Nome::set_nome(){
    std::cout << "Digite seu nome: " << std::endl;
    getline(std::cin, nome, '\n');
    validar_nome();
    return;
}

void Nome::get_nome(){
    std::cout << "Nome: " << nome << std::endl;
    return;
}

void Nome::validar_nome(){
    if (nome.size() < MINIMO_CARACTERES || nome.size() > MAXIMO_CARACTERES || !isValidText(nome, NOME) || !isValidPunctuation(nome) || !isValidCapitalLetter(nome))
        throw std::invalid_argument ("Nome inválido!");
    return;
}

Numero::Numero(){
    numero = "000000-0";
}

Numero::Numero(std::string num){

    numero = num;
    validar_numero();
}

Numero::~Numero(){
    //dtor
}

void Numero::set_numero(){
    std::cout << "Digite o número da conta: " << std::endl;
    getline(std::cin, numero, '\n');
    validar_numero();
    return;
}

void Numero::get_numero(){
    std::cout << "Número: " << numero << std::endl;
    return;
}

void Numero::validar_numero(){
    char digito = digitoVerificador(numero, 6);

    if(numero.size() != 7 || howManyNumbers(numero) < 7 || numero[6] != digito)
        throw std::invalid_argument("Número inválido!");

    return;
}

Prazo::Prazo(){
    prazo = "Prazo não definido";
}

Prazo::Prazo(std::string text){

    prazo = text;
    validar_prazo();
}

Prazo::~Prazo(){
    //dtor
}

void Prazo::set_prazo(){
    std::cout << "Defina o prazo:" << std::endl;
    getline(std::cin, prazo, '\n');
    validar_prazo();
    return;
}

void Prazo::get_prazo(){
    std::cout << "Prazo: " << prazo << " meses" << std::endl;
    return;
}

void Prazo::validar_prazo(){
    if (prazo != "6" && prazo != "12" && prazo != "18" && prazo != "24" && prazo != "30" && prazo != "36" && prazo != "42" && prazo != "48" && prazo != "54" && prazo != "60" && prazo != "66" && prazo != "72")
        throw std::invalid_argument("Prazo inválido!");

    return;
}


Senha::Senha(){
    senha = "Senha não definida";
}

Senha::Senha(std::string num){

    senha = num;
    validar_senha();
}

Senha::~Senha(){
    //dtor
}

void Senha::set_senha(){
    std::cout << "Digite a sua senha: " << std::endl;
    getline(std::cin, senha, '\n');
    validar_senha();
    return;
}

void Senha::get_senha(){
    std::cout << "Senha: " << senha << std::endl;
    return;
}

void Senha::validar_senha(){

    if(senha.size() != 6 || howManyNumbers(senha) < 6)
        throw std::invalid_argument("Senha inválida!");

    for (unsigned int i = 0; i < senha.size() - 1; i++){
        for (unsigned int j = i+1; j < senha.size(); j++)
            if(senha[i] == senha[j])
                throw std::invalid_argument("Senha inválida!");
    }

    return;
}

Taxa::Taxa(){
    taxa = 0;
}

Taxa::Taxa(int tax){

    taxa = tax;
    validar_taxa();
}

Taxa::~Taxa(){
    //dtor
}

void Taxa::set_taxa(){
    std::cout << "Defina a taxa ao ano:" << std::endl;
    std::cin >> taxa;
    clearBuffer();
    validar_taxa();
    return;
}

void Taxa::get_taxa(){
    std::cout << "Taxa: " << taxa << "% ao ano" << std::endl;
    return;
}

void Taxa::validar_taxa(){

    if(taxa < MINIMO_TAXA || taxa > MAXIMO_TAXA)
        throw std::invalid_argument("Taxa inválida!");

    return;
}

ValorDeAplicacao::ValorDeAplicacao(){
    valoraplicacao = 0.00;
}

ValorDeAplicacao::ValorDeAplicacao(float valor){

    valoraplicacao = valor;
    validar_valor_aplicacao();
}

ValorDeAplicacao::~ValorDeAplicacao(){
    //dtor
}

void ValorDeAplicacao::set_valor_aplicacao(){
    std::cout << "Defina o valor de aplicação:" << std::endl;
    std::cin >> valoraplicacao;
    clearBuffer();
    validar_valor_aplicacao();
    return;
}

void ValorDeAplicacao::get_valor_aplicacao(){
    std::cout.precision(10);
    std::cout << "Valor de aplicação: R$ " <<  (valoraplicacao) << std::endl;
    return;
}

void ValorDeAplicacao::validar_valor_aplicacao(){
    if(valoraplicacao < MINIMO_APLICACAO || valoraplicacao > MAXIMO_APLICACAO)
        throw std::invalid_argument("Valor de aplicação inválido!");

    return;
}

ValorMinimo::ValorMinimo(){
    valorminimo = "0";
}

ValorMinimo::ValorMinimo(std::string text){

    valorminimo = text;
    validar_valor_minimo();
}

ValorMinimo::~ValorMinimo(){
    //dtor
}

void ValorMinimo::set_valor_minimo(){
    std::cout << "Defina o valor mínimo:" << std::endl;
    getline(std::cin, valorminimo, '\n');
    validar_valor_minimo();
    return;
}

void ValorMinimo::get_valor_minimo(){
    std::cout << "Valor mínimo: R$ " << valorminimo << std::endl;
    return;
}

void ValorMinimo::validar_valor_minimo(){
    if (valorminimo != "1000" && valorminimo != "5000" && valorminimo != "10000" && valorminimo != "50000")
        throw std::invalid_argument("Valor mínimo inválido!");

    return;
}
