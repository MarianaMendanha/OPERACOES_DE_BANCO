#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

/// \file

/// \brief Impede que o buffer seja ocupado com "\n".
///
/// \return void
///
///
void clearBuffer();

/// \brief Calcula a quantidade de caracteres em uma string que s&atilde;o n&uacute;meros.
///
/// \param (std::string) texto a ser verificado
/// \return (int) quantidade de n&uacute;meros na string.
///
///
int howManyNumbers(std::string);

/// \brief Calcula a quantidade de caracteres em uma string que s&atilde;o letras.
///
/// \param (std::string) texto a ser verificado
/// \return (int) quantidade de letras na string.
///
///
int howManyLetters(std::string);

/// \brief Calcula a quantidade de pontos (.) tra&ccedil;os (-) e espa&ccedil;os ( ) na string.
///
/// \param (std::string) texto a ser verificado
/// \param (int) n&uacute;mero identificador de 0 a 2: <br>
/// 0 - os tr&ecirc;s tipos de caracteres ser&atilde;o considerados (para ser usado no emissor); <br>
/// 1 - apenas espa&ccedil;os e pontos ser&atilde;o considerados (para ser usado no endere&ccedil;o); <br>
/// 2 - apenas espa&ccedil;os ser&atilde;o considerados (para ser usado no nome).
/// \return (int) quantidade de pontos, espa&ccedil;os e tra&ccedil;os na string.
///
///
int howManyPunctuations(std::string, int);

/// \brief Determina a validez de strings com pontua&ccedil;&atilde;o.
///
/// \param (std::string) texto a ser validado
/// \return (bool) "true" se n&atilde;o h&aacute; dois caracteres de pontua&ccedil;&atilde;o seguidos; <br>
/// "false" se h&aacute; dois caracteres de pontua&ccedil;&atilde;o seguidos.
///
///
bool isValidPunctuation(std::string);

/// \brief Determina se a data transmitida &eacute; v&aacute;lida.
///
/// \param (int) dia
/// \param (int) m&ecirc;s
/// \return (bool) "true" se a data transmitida &eacute; v&aacute;lida. <br>
/// "false" se n&atilde;o &eacute;.
///
///
bool isValidDate(int, int);

/// \brief Determina se o ano transmitido &eacute; bissexto ou n&atilde;o.
///
/// \param (int) ano
/// \return (bool) "true" se &eacute; bissexto; <br>
/// "false" se n&atilde;o &eacute;.
///
///
bool isLeapYear(int);

/// \brief Determina se h&aacute; apenas letras, n&uacute;meros e pontua&ccedil;&atilde;o v&aacute;lida no texto transmitido.
///
/// \param (std::string) texto a ser validado
/// \param (int) n&uacute;mero identificador de 0 a 2 para ser transferido para a fun&ccedil;&atilde;o howManyPunctuations().
/// \return (bool) "true" se o texto &eacute; v&aacute;lido; <br>
/// "false" se n&atilde;o &eacute;.
///
///
bool isValidText(std::string, int);

/// \brief Determina se cada termo da string transmitida inicia com letra mai&uacute;scula ou n&atilde;o.
///
/// \param (std::string) texto a ser validado.
/// \return (bool) "true" se cada termo da string transmitida inicia com letra mai&uacute;scula; <br>
/// "false" se h&aacute; um ou mais termos que n&atilde;o inicia com letra mai&uacute;scula.
///
///
bool isValidCapitalLetter(std::string);

/// \brief Calcula o d&iacute;gito verificador do CPF do usu&aacute;rio n&uacute;mero da conta utilizando o algoritmo de d&iacute;gito verificador do CPF.
///
/// \param (std::string) número a ser calculado dígito verificador
/// \param (int) quantidade de algarismos
///
/// \return (char) dígito verificador na forma de char
///
///
char digitoVerificador(std::string, int);


#endif // FUNCTIONS_H_INCLUDED
