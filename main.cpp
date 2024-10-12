#include <iostream>
#include "operacoes.h"
#include "EntradaSaida.h"

using namespace std;

int main() {
    double num1, num2, resultado;
    int operacao;

    do {
        operacao = solicOperacao();

        if (operacao >= 1 && operacao <= 4) {
            num1 = solicNumero("primeiro");
            num2 = solicNumero("segundo");
        }

        switch (operacao) {
            case 1:
                resultado = soma(num1, num2);
            mostrarResultado(resultado, operacao);
            break;
            case 2:
                resultado = subtracao(num1, num2);
            mostrarResultado(resultado, operacao);
            break;
            case 3:
                resultado = multiplicacao(num1, num2);
            mostrarResultado(resultado, operacao);
            break;
            case 4:
                resultado = divisao(num1, num2);
            mostrarResultado(resultado, operacao);
            break;
            case 5:
                cout << "Saindo do programa." << endl;
            break;
            default:
                cout << "Operação inválida! Tente novamente." << endl;
        }
        cout << endl;
    } while (operacao != 5);

    return 0;
}