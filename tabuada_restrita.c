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
    int inicio = get_int("Você quer começar a tabuada em qual numero? ");
    int fim = get_int("Você quer terminar a tabuada em qual numero? ");
        if (inicio < 0 || inicio > 10 || fim < inicio || fim < 1 || fim > 10 )
        {
            printf("%s\n", "Erro na especificação da tabuada.");
        } 
        else
        {
            for(int contador = inicio; contador<=fim; contador++)
            {
                int produto = numero * contador;
                    printf("%i x %i = %i\n", numero, contador, produto );
            }
        }
}
