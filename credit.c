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

// Comece aqui seu pragrama.
#include <cs50.h>
#include <stdio.h>

int valida_amex(const char numero[]);
int valida_master(const char numero[]);
int valida_visa(const char numero[]);

int main(void)
{
    string numero_cartao = get_string("NÚMERO: ");

    if (valida_amex(numero_cartao))
    {
        printf("%s\n", "AMEX");
    }
    else if (valida_master(numero_cartao))
    {
        printf("%s\n", "MASTERCARD");
    }
    else if (valida_visa(numero_cartao))
    {
        printf("%s\n", "VISA");
    }
    else
    {
        printf("%s\n", "INVÁLIDO");
    }

    return 0;
}

int verifica_digito(char c)
{
    return c >= '0' && c <= '9';
}

int valida_amex(const char numero[])
{
    int len = 0;
    while (numero[len] != '\0')
        len++;

    if (len != 15)
        return 0;

    if (numero[0] != '3' || (numero[1] != '4' && numero[1] != '7'))
        return 0;

    int sum = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (!verifica_digito(numero[i]))
            return 0;

        int digit = numero[i] - '0';
        if (i % 2 == len % 2)
            digit *= 2;
        if (digit > 9)
            digit -= 9;
        sum += digit;
    }

    return (sum % 10 == 0);
}



int valida_master(const char numero[])
{
    int len = 0;
    while (numero[len] != '\0')
        len++;

    if (len != 16)
        return 0;

    if (numero[0] != '5' || (numero[1] < '1' || numero[1] > '5'))
        return 0;

    int sum = 0;
    for (int i = len - 2; i >= 0; i -= 2)
    {
        int digit = (numero[i] - '0') * 2;
        if (digit > 9)
            digit -= 9;
        sum += digit;
    }

    for (int i = len - 1; i >= 0; i -= 2)
    {
        if (!verifica_digito(numero[i]))
            return 0;

        sum += numero[i] - '0';
    }

    return (sum % 10 == 0);
}

int valida_visa(const char numero[])
{
    int len = 0;
    while (numero[len] != '\0')
        len++;

    if (len != 13 && len != 16)
        return 0;

    if (numero[0] != '4')
        return 0;

    int sum = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (!verifica_digito(numero[i]))
            return 0;

        int digit = numero[i] - '0';
        if (i % 2 == len % 2)
            digit *= 2;
        if (digit > 9)
            digit -= 9;
        sum += digit;
    }

    return (sum % 10 == 0);
}