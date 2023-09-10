/**
 * IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo:Diogo Francis Belshoff
 *    Matrícula:202310293
 *    Turma:CC1Ma
 *    Email:diogobelshoff@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */


/**
 * Inclusão de bibliotecas:
 */
#include <cs50.h>
#include <stdio.h>


/**
 * Função main:
 */
int main(void)
{
    // Obtém menor número do usuário (no mínimo 1):
    int min;
    do
    {
        min = get_int("Menor número: ");
    }
    while (min < 1);

    // Obtém maior número do usuário (tem que ser maior do que o min):
    int max;
    do
    {
        max = get_int("Maior número: ");
    } 
    while (min >= max);

    // TODO: escreva aqui o código para imprimir todos os números primos dentro
    // da faixa especificada pelo usuário. Pode ser útil utilizar dois loops (um
    // dentro do outro) e algumas estruturas condicionais. O operador módulo
    // também pode ser útil!

        
        int contador = min;
            while (contador <= max)
            {
                int divisor = contador - 1;

                    while (divisor > 1)
                    {
                        if (contador % divisor == 0)
                        {
                            break; 
                        }
                                divisor--;
                    }
                        if (divisor == 1)
                        {
                            printf("%i\n", contador);
                        }  
                                contador++;
            }
return 0;
}


