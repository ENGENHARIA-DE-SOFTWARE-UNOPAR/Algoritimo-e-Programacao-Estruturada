Algoritmo "AP1.2"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/09/2022
Var
// Se��o de Declara��es das vari�veis 
    a, b, valor: inteiro;

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
      escreva ("Voc� dever� entrar com dois valores, sendo que eles dever�o ser positivos e inteiros.")
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
       
      escreval ("A potencia �:", valor)
      
Fimalgoritmo