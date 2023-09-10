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

// Comece aqui seu programa
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string trocar(string palavra);
/**
 * MAIN
 */
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Uso: %s <palavra>\n", argv[0]);
        return 1;
    }
    else
    {
        string palavra_original = argv[1];
        string palavra_convertida = trocar(palavra_original);
        printf("%s\n", palavra_convertida);
    }

    return 0;
}

string trocar(string palavra)
{
    int tamanho = strlen(palavra);
    string palavra_convertida = malloc(tamanho + 1);
    for (int i = 0; i < tamanho; i++)
    {
        switch (palavra[i])
        {
            case 'a':
                palavra_convertida[i] = '6';
                break;
            case 'e':
                palavra_convertida[i] = '3';
                break;
            case 'i':
                palavra_convertida[i] = '1';
                break;
            case 'o':
                palavra_convertida[i] = '0';
                break;
            case 'u':
                palavra_convertida[i] = 'v';
                break;
            default:
                palavra_convertida[i] = palavra[i];
                break;
        }
    }
    palavra_convertida[tamanho] = '\0';
    return palavra_convertida;
}
