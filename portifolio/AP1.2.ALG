Algoritmo "AP1.2"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/09/2022
Var
// Seção de Declarações das variáveis 
    a, b, valor: inteiro;

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
      escreva ("Você deverá entrar com dois valores, sendo que eles deverão ser positivos e inteiros.")
      escreva ("")
      escreva ("Entre com o valor de a:")
              leia (a)
      escreva ("Entre com o valor de b:")
              leia (b)
              valor <- 1

       enquanto b <> 0 faca
             valor <- a*valor
             b <- b-1
       fimenquanto
       
      escreval ("A potencia é:", valor)
      
Fimalgoritmo