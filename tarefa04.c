#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000
#define FORWARD 5

struct mensagem
{
        char nome[100];
        char departamento[60];
        char cryp_mens[40];
        int ID;
};

struct mensagem mens[MAX];


int main()
{
	int i, j, opcao, total, achou;
	char procura[40], descript[40];
	char *encontrou;
	char letter;

	opcao = 99;
	total = 0;

	do
    {
        fflush(stdin);

        achou = 0;

        printf("****MENU DE CRIPTOGRAFIA****\n");
        printf("1: Criptografar mensagem\n");
        printf("2: Encontrar padroes\n");
        printf("3: Descriptografar mensagem\n");
        printf("4: Visualizar todas as mensagens\n");
        printf("0: Sair!\n");

        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("****ADICIONAR MENSAGEM****\n");

                fflush(stdin);

                printf("Digite o nome do Agente:\n");
                fgets(mens[total].nome, 101, stdin);

                mens[total].nome[strcspn(mens[total].nome, "\n")] = 0;

                fflush(stdin);

                printf("Digite o departamento:\n");
                fgets(mens[total].departamento, 61, stdin);

                mens[total].departamento[strcspn(mens[total].departamento, "\n")] = 0;

                fflush(stdin);

                printf("Digite a mensagem a ser criptografada:\n");
                fgets(mens[total].cryp_mens, 41, stdin);

                for(j = 0; j < strlen(mens[total].cryp_mens); j++)
                {
                    mens[total].cryp_mens[j] = toupper(mens[total].cryp_mens[j]);
                    letter = mens[total].cryp_mens[j];

                    if(letter >= 65 && letter <= 90)
                    {
                        if(letter + FORWARD <= 90)
                            mens[total].cryp_mens[j] = mens[total].cryp_mens[j] + FORWARD;
                        else
                            mens[total].cryp_mens[j] = mens[total].cryp_mens[j] - 26 + FORWARD;
                    }

                }

                mens[total].cryp_mens[strcspn(mens[total].cryp_mens, "\n")] = 0;

                fflush(stdin);

                printf("Digite o numero de identificacao do agente:\n");
                scanf("%d", &mens[total].ID);

                total += 1;

                break;
            case 2:

                printf("****ENCONTRAR PADROES****\n");

                fflush(stdin);

                printf("Digite o padrao a ser encontrado:\n");

                fgets(procura, 41, stdin);

                procura[strcspn(procura, "\n")] = 0;

                fflush(stdin);

                for(j = 0; j < strlen(procura); j++)
                {
                    procura[j] = toupper(procura[j]);
                    letter = procura[j];

                    if(letter >= 65 && letter <= 90)
                    {
                        if(letter + FORWARD <= 90)
                            procura[j] = procura[j] + FORWARD;
                        else
                            procura[j] = procura[j] - 26 + FORWARD;
                    }

                }

                for(j = 0; j < total; j++)
                {
                    encontrou = strstr(mens[j].cryp_mens, procura);

                    if(strlen(encontrou) > 1)
                        achou++;
                }

                printf("****Padrao encontrado em %d mensagens!****\n", achou);

                strcpy(procura, "");

                break;
            case 3:

                printf("****DESCRIPTOGRAFAR MENSAGEM****\n");

                fflush(stdin);

                printf("Digite a mensagem criptografada:\n");

                fgets(procura, 41, stdin);

                procura[strcspn(procura, "\n")] = 0;

                fflush(stdin);

                strcpy(descript, procura);

                for(j = 0; j < strlen(descript); j++)
                {
                    descript[j] = toupper(descript[j]);
                    letter = descript[j];

                    if(letter >= 65 && letter <= 90)
                    {
                        if(letter - FORWARD >= 65)
                            descript[j] = descript[j] - FORWARD;
                        else
                            descript[j] = descript[j] + 26 - FORWARD;
                    }

                }

                for(i = 0; i < total; i++)
                {
                    achou = strcmp(mens[i].cryp_mens, procura);

                    if(achou == 0)
                    {
                        printf("%s\n", mens[i].nome);
                        printf("%s\n", mens[i].departamento);
                        printf("%s\n", descript);
                        printf("%d\n", mens[i].ID);
                    }
                    else
                    {
                        printf("****Mensagem nao encontrada!****\n");
                    }
                }

                strcpy(procura, "");

                break;
            case 4:
                printf("****VISUALIZAR TODAS AS MENSAGENS****\n");

                for(i = 0; i < total; i++)
                {
                    printf("%s\n", mens[i].nome);
                    printf("%s\n", mens[i].departamento);
                    printf("%s\n", mens[i].cryp_mens);
                    printf("%d\n", mens[i].ID);
                }

                break;
            case 0:
                break;
            default:
                printf("****Opcao Invalida, tentar novamente****\n");
                break;
        }

    } while (opcao != 0);

	return 0;
}
