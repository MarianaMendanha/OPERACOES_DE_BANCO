#include <iostream>
#include <string>

void clearBuffer(){
    for (int c = getchar(); c != '\n' && c != EOF; c = getchar()){}
}

int howManyNumbers (std::string text){
    int contador_numeros = 0;

    for(unsigned int i = 0; i < text.size(); i++){
        if (text[i] >= '0' && text[i] <= '9')
            contador_numeros++;
    }
    return contador_numeros;
}

int howManyLetters(std::string text){
    unsigned int contador_letras = 0;

    for(unsigned int i = 0; i < text.size(); i++){
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            contador_letras++;
    }
    return contador_letras;
}

int howManyPunctuations(std::string text, int type){
    unsigned int contador_pontuacoes = 0;
    unsigned int i = 0;

    switch (type){
        case 0:
            for(i = 0; i < text.size(); i++){
                if (text[i] == ' ' || text[i] ==  '.' || text[i] == '-')
                    contador_pontuacoes++;
            }
            break;

        case 1:
            for(i = 0; i < text.size(); i++){
                if (text[i] == ' ' || text[i] ==  '.')
                    contador_pontuacoes++;
            }
            break;

        case 2:
            for(unsigned int i = 0; i < text.size(); i++){
                if (text[i] == ' ')
                    contador_pontuacoes++;
            }
            break;
    }

    return contador_pontuacoes;
}

bool isValidPunctuation(std::string text){
    for(unsigned int i = 0; i < text.size() - 1; i++){
        if ((text[i] == ' ' && (text[i + 1] == ' ' || text[i + 1] == '.' || text[i + 1] == '-')) || (text[i] == '.' && (text[i + 1] == ' ' || text[i + 1] == '.' || text[i + 1] == '-')) || (text[i] == '-' && (text[i + 1] == ' ' || text[i + 1] == '.' || text[i + 1] == '-')))
            return false;
    }
    return true;
}

bool isValidDate(int dia, int mes){
    if ((mes == 2 && dia > 29) || ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) || dia > 31 || mes > 12 || dia < 1 || mes < 1)
        return false;
    return true;
}

bool isLeapYear (int ano){
    int resto;

    resto = ano % 4;

    if (resto != 0)
        return false;
    return true;
}

bool isValidText(std::string text, int type){

    if (type != 2){
        unsigned int contador_texto = howManyNumbers(text) + howManyLetters(text) + howManyPunctuations(text, type);

        if(contador_texto != text.size())
            return false;
    } else {
        unsigned int contador_texto = howManyLetters(text) + howManyPunctuations(text, type);

        if(contador_texto != text.size())
            return false;
    }
    return true;
}

bool isValidCapitalLetter(std::string text){
    if(text[0] >= 'a' && text[0] <= 'z')
        return false;

    for (unsigned int i = 0; i < text.size() - 1; i++){
        if ((text[i] == ' ' || text[i] == '.' || text[i] == '-' || (text[i] >= '0' && text[i] <= '9')) && (text[i + 1] >= 'a' && text[i + 1] <= 'z'))
            return false;
    }
    return true;
}

char digitoVerificador(std::string numero, int tamanho){
    int aux = 0;
    char digito;

    for (int i = 0; i < tamanho; i++)
        aux += (numero[i] - '0') * (tamanho + 1 - i);

    aux = 11 - (aux % 11);

    switch(aux){

        case 10:
            if (tamanho == 6)
                digito = 'X';
            else
                digito = '0';
            break;

        case 11:
            digito = '0';
            break;

        default:
            digito = aux + '0';
            break;
    }
    return digito;
}


