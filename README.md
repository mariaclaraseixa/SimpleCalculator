Esta é uma calculadora simples desenvolvida em C++ que realiza as quatro operações básicas:
soma, subtração, multiplicação e divisão. O programa utiliza conceitos de Programação Orientada a Objetos (POO), 
como herança e classes, para modularizar as diferentes operações.

Funcionalidades

	•	Soma: Realiza a soma de dois números.
	•	Subtração: Calcula a diferença entre dois números.
	•	Multiplicação: Multiplica dois números.
	•	Divisão: Divide um número pelo outro, com tratamento de erro para divisão por zero.

Estrutura do Projeto

O projeto está organizado em vários arquivos para uma melhor separação de responsabilidades:

	•	main.cpp: Contém a função principal que controla o fluxo do programa.
	•	EntradaSaida.h: Declara as funções de entrada e saída, como solicitação de números e operações, além de exibição do resultado.
	•	EntradaSaida.cpp: Implementa as funções declaradas em EntradaSaida.h.
	•	Operacoes.h: Contém as classes base e derivadas que representam as operações matemáticas.
	•	Operacoes.cpp: Implementa as operações aritméticas.
