/* Leia 2 valores de ponto flutuante de dupla precis�o A e B, que correspondem a 2 notas de um aluno.
A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto � 11).
Assuma que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.


O arquivo de entrada cont�m 2 valores com uma casa decimal cada um..

Calcule e imprima a vari�vel MEDIA conforme exemplo abaixo, com 5 d�gitos ap�s o ponto decimal.
Utilize vari�veis de dupla precis�o (double) e como todos os problemas, n�o esque�a de imprimir o fim de linha ap�s o resultado.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double A, B,MEDIA;

    scanf("%lf", &A); // 3.5
    scanf("%lf", &B); //7.5

    MEDIA = (A * 3.5 + B * 7.5) / 11;


    printf("\nMEDIA = %.5lf\n",MEDIA); //MEDIA = 6.43182
    system("pause");
	return 0;
}
