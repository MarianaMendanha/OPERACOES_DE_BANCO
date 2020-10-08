# OPERACOES_DE_BANCO
Este repositório consiste em um trabalho de graduação do curso Técnicas de Programação 1.
Seu objetivo é criar um sistema de software com operações de banco.

REQUISITOS FUNCIONAIS
O sistema de software desenvolvido visa prover acesso a produtos de investimento. Por meio desse sistema, qualquer
usuário pode obter dados sobre um conjunto de produtos de investimento cadastrados. Para cada produto de investimento,
estão disponíveis os seguintes dados: código identificador do produto de investimento, classe do produto de investimento,
emissora do produto de investimento, prazo de aplicação em mêses, data de vencimento na qual os recursos estarão
disponíveis, taxa de remuneração do produto de investimento, horário limite para aplicação no produto de investimento e valor
mínimo para aplicação no produto de investimento. Para acessar dados dos produtos de investimento, o usuário deve informar
a classe dos produtos de investimento. Em resposta, o sistema apresenta, para cada produto de investimento nessa classe, os
dados do produto de investimento. Para acessar outros serviços providos pelo sistema, o usuário precisa ser autenticado. Para
ser autenticado, o usuário precisa estar cadastrado. Para se cadastrar, o usuário deve informar nome, endereço, CEP, CPF e
senha. Ao se cadastrar, o usuário deve também cadastrar uma conta corrente. Para isso, precisa informar código de banco,
código de agência e número de conta. Para ser autenticado, o usuário deve informar CPF e senha. Uma vez autenticado, o
usuário tem acesso aos seguintes serviços: apresentar dados do seu cadastro, apresentar dados da sua conta corrente, cadastrar
produto de investimento, descadastrar produto de investimento, realizar aplicação em produto de investimento e listar suas
aplicações em produtos de investimento. Ao cadastrar um produto de investimento, o usuário deve informar os dados do
produto de investimento. Para descadastrar um produto de investimento, o usuário deve informar o código do produto de
investimento. Para realizar uma aplicação em um produto de investimento, o usuário deve informar código para a sua
aplicação, código do produto de investimento, valor e data da aplicação. Uma aplicação só é aceita se o seu valor for igual ou
superior ao valor mínimo aceito para aplicação no produto de investimento. Em cada instante, associadas à uma conta corrente,
não podem existir ter mais de 5 aplicações. Cada usuário pode se descadastrar quando desejar, sendo então excluídos os seus
dados.
