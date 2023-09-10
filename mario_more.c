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

int buscar_altura(void);
void construir_parede(int altura);

int main(void)
{
    int altura = buscar_altura();
    construir_parede(altura);
    return 0;
}

int buscar_altura(void)
{
    int altura;
    do
    {
        altura = get_int("Altura: ");
    }
    while (altura < 1 || altura > 8);
    return (altura);
}

void construir_parede(int altura)
{
    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < altura - (i + 1); j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 1 * i + 1; j++)
        {
            printf("#");
        }

        printf("  ");

        for (int j = 0; j < 1 * i + 1; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}