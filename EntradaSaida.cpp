//
// Created by Maria Clara Seixa Scheffel on 07/10/24.
//
#include "EntradaSaida.h"

double solicNumero(const string& ordem) {
    double num;
    cout << "Informe o " << ordem << " número: ";
    cin >> num;
    return num;
}

int solicOperacao() {
    int operacao;
    cout << "Escolha uma operação: " << endl;
    cout << "1. Soma" << endl;
    cout << "2. Subtração" << endl;
    cout << "3. Multiplicação" << endl;
    cout << "4. Divisão" << endl;
    cout << "5. Sair" << endl;
    cout << "Digite sua opção: ";
    cin >> operacao;
    return operacao;
}

void mostrarResultado(const double& resultado, const int& operacao) {
    string operacaoTxt;
    switch (operacao) {
        case 1:
            operacaoTxt = "soma";
        break;
        case 2:
            operacaoTxt = "subtração";
        break;
        case 3:
            operacaoTxt = "multiplicação";
        break;
        case 4:
            operacaoTxt = "divisão";
        break;
    }
    cout << "O resultado da " << operacaoTxt << " é: " << resultado << endl;
}