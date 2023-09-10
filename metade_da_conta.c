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

float divide_conta(float comida, float impostos, int gorjeta);
/**
 * Função main
 */
int main(void)
{
    // Solicita o valor da comida:
    float comida;
    do
    {
        comida = get_float("Valor da comida: ");
    }
    while (comida < 10.00 || comida > 999.99);

    // Solicita o percentual de impostos:
    float impostos;
    do
    {
        impostos = get_float("Porcentagem de impostos: ");
    }
    while (impostos < 0.00 || impostos > 100.00);

    // Solicita o percentual de gorjeta:
    int gorjeta;
    do
    {
        gorjeta = get_int("Porcentagem da gorjeta: ");
    }
    while (gorjeta < 0 || gorjeta > 100);

    // TODO: coloque aqui seu código para o cálculo do valor da conta.
    // Não se esqueça de imprimir o valor final conforme especificado na
    // descrição do exercício.

    float conta_total = divide_conta(comida, impostos, gorjeta);
    printf("Cada um pagará R$ %.2f!\n", conta_total);

    // Termina o programa:
    return 0;
}

float divide_conta(float comida, float impostos, int gorjeta)
{
    float conta = (comida + (comida * (impostos / 100)));
    float conta_total = ((conta + (((float) gorjeta / 100) * conta)) / 2);
    return conta_total;
}