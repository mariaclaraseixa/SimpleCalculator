//
// Created by Maria Clara Seixa Scheffel on 07/10/24.
//
#include "operacoes.h"
#include <stdexcept>

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        throw std::invalid_argument("Divisão por zero!");
    }
}