/* IDENTIFICAÇÃO DO ESTUDANTE:
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

// Comece aqui seu programa.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numero = get_int("Você quer a tabuada de qual numero? ");

        do
        {
            if (numero < 1 || numero > 99)
            {
                numero = get_int("Informe um número entre 1 e 99! ");
            } 
        }
        while (numero < 1 || numero > 99);

            for(int contador = 0; contador <= 10; contador++)
            {
                int produto = numero * contador;
                    printf("%i x %i = %i\n", numero, contador, produto );
            }
}


