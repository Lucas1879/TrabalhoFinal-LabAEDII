#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct no
{
    int        dado;
    struct no *prox;
};

typedef struct
{
    struct no *topo;
} pilha;

pilha estacionamento, rua;
int i, carro, total=0, f, r, c;

void cria(pilha *s);
int  empilha(pilha *s, int d);
int  desempilha(pilha *s, int *d);
int  estaVazia(pilha s);
void mostra(pilha s);
int  topo(pilha s);
void retiraCarro(int carro, int quantidade);

int main()
{
    int opcao;

    setlocale(LC_ALL, "Portuguese");

    cria(&estacionamento);
    cria(&rua);

    do{
        printf("\nEstacionamento Português\n");
        printf("[1] Guardar o carro no estacionamento\n");
        printf("[2] Retirar o carro do estacionamento\n");
        printf("[3] Ver os carros que estão no estacionamento\n");
        printf("[4] Ir embora\n");
        printf("Digite o número da opção que deseja para ser atendido: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: if (total == 10){
                        printf("\nEstacionamento cheio! Tente novamente mais tarde.\n\n");
                        break;
                    }
                    else{
                        total++;
                        empilha(&estacionamento, total);
                        mostra(estacionamento);
                        break;
                    }

            case 2: mostra(estacionamento);
                if (!estaVazia(estacionamento)){
                    printf("Digite o número do carro que deseja retirar: ");
                    scanf("%d", &carro);

                    if (carro == 1 && total == 1){
                        i = desempilha(&estacionamento, &carro);
                        total--;
                    }
                    if (carro == 1 && total == 2){
                        i = desempilha(&estacionamento, &carro);
                        if (i != 0){
                            total--;
                            r = carro;
                            empilha(&rua, r);
                        }
                        i = desempilha(&estacionamento, &carro);
                        total--;
                        if (!estaVazia(rua)){
                            r = carro;
                            i = desempilha(&rua, &r);
                            if (i != 0){
                                c = 1;
                                empilha(&estacionamento, c);
                                total++;
                            }
                        }
                    }
                    if (carro == 1 && total == 3)
                        retiraCarro(1, 2);
                    if (carro == 1 && total == 4)
                        retiraCarro(1, 3);
                    if (carro == 1 && total == 5)
                        retiraCarro(1, 4);
                    if (carro == 1 && total == 6)
                        retiraCarro(1, 5);
                    if (carro == 1 && total == 7)
                        retiraCarro(1, 6);
                    if (carro == 1 && total == 8)
                        retiraCarro(1, 7);
                    if (carro == 1 && total == 9)
                        retiraCarro(1, 8);
                    if (carro == 1 && total == 10)
                        retiraCarro(1, 9);

                    if (carro == 2 && total == 2){
                        i = desempilha(&estacionamento, &carro);
                        total--;
                    }
                    if (carro == 2 && total == 3){
                        i = desempilha(&estacionamento, &carro);
                        if (i != 0){
                            total--;
                            r = carro;
                            empilha(&rua, r);
                        }
                        i = desempilha(&estacionamento, &carro);
                        total--;
                        if (!estaVazia(rua)){
                            c=2;
                            r = carro;
                            i = desempilha(&rua, &r);
                            if (i != 0){
                                empilha(&estacionamento, c);
                                total++;
                            }
                        }
                    }
                    if (carro == 2 && total == 4)
                        retiraCarro(2, 2);
                    if (carro == 2 && total == 5)
                        retiraCarro(2, 3);
                    if (carro == 2 && total == 6)
                        retiraCarro(2, 4);
                    if (carro == 2 && total == 7)
                        retiraCarro(2, 5);
                    if (carro == 2 && total == 8)
                        retiraCarro(2, 6);
                    if (carro == 2 && total == 9)
                        retiraCarro(2, 7);
                    if (carro == 2 && total == 10)
                        retiraCarro(2, 8);

                    if (carro == 3 && total == 3){
                        i = desempilha(&estacionamento, &carro);
                        total--;
                    }
                    if (carro == 3 && total == 4){
                            i = desempilha(&estacionamento, &carro);
                            if (i != 0){
                                total--;
                                r = carro;
                                empilha(&rua, r);
                            }
                        i = desempilha(&estacionamento, &carro);
                        total--;
                        if (!estaVazia(rua)){
                            c=3;
                            for(f=0; f<2; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                            }
                        }
                    }
                    if (carro == 3 && total == 5)
                        retiraCarro(3, 2);
                    if (carro == 3 && total == 6)
                        retiraCarro(3, 3);
                    if (carro == 3 && total == 7)
                        retiraCarro(3, 4);
                    if (carro == 3 && total == 8)
                        retiraCarro(3, 5);
                    if (carro == 3 && total == 9)
                        retiraCarro(3, 6);
                    if (carro == 3 && total == 10)
                        retiraCarro(3, 7);

                    if (carro == 4 && total == 4){
                        i = desempilha(&estacionamento, &carro);
                        total--;
                    }
                    if (carro == 4 && total == 5){
                        i = desempilha(&estacionamento, &carro);
                        if (i != 0){
                            total--;
                            r = carro;
                            empilha(&rua, r);
                        }
                        i = desempilha(&estacionamento, &carro);
                        total--;
                        if (!estaVazia(rua)){
                            c=4;
                            r = carro;
                            i = desempilha(&rua, &r);
                            if (i != 0){
                                empilha(&estacionamento, c);
                                total++;
                                c++;
                            }
                        }
                    }
                    if (carro == 4 && total == 6)
                        retiraCarro(4, 2);
                    if (carro == 4 && total == 7)
                        retiraCarro(4, 3);
                    if (carro == 4 && total == 8)
                        retiraCarro(4, 4);
                    if (carro == 4 && total == 9)
                        retiraCarro(4, 5);
                    if (carro == 4 && total == 10)
                        retiraCarro(4, 6);

                    if (carro == 5 && total == 5){
                        i = desempilha(&estacionamento, &carro);
                        total--;
                    }
                    if (carro == 5 && total == 6){
                        i = desempilha(&estacionamento, &carro);
                        if (i != 0){
                            total--;
                            r = carro;
                            empilha(&rua, r);
                        }
                        i = desempilha(&estacionamento, &carro);
                        total--;
                        if (!estaVazia(rua)){
                            c=5;
                            r = carro;
                            i = desempilha(&rua, &r);
                            if (i != 0){
                                empilha(&estacionamento, c);
                                total++;
                            }
                        }
                    }
                    if (carro == 5 && total == 7)
                        retiraCarro(5, 2);
                    if (carro == 5 && total == 8)
                        retiraCarro(5, 3);
                    if (carro == 5 && total == 9)
                        retiraCarro(5, 4);
                    if (carro == 5 && total == 10)
                        retiraCarro(5, 5);

                    if (carro == 6 && total == 6){
                        i = desempilha(&estacionamento, &carro);
                        total--;
                    }
                    if (carro == 6 && total == 7){
                        i = desempilha(&estacionamento, &carro);
                        if (i != 0){
                            total--;
                            r = carro;
                            empilha(&rua, r);
                        }
                        i = desempilha(&estacionamento, &carro);
                        total--;
                        if (!estaVazia(rua)){
                            c=6;
                            r = carro;
                            i = desempilha(&rua, &r);
                            if (i != 0){
                                empilha(&estacionamento, c);
                                total++;
                            }
                        }
                    }
                    if (carro == 6 && total == 8)
                        retiraCarro(6, 2);
                    if (carro == 6 && total == 9)
                        retiraCarro(6, 3);
                    if (carro == 6 && total == 10)
                        retiraCarro(6, 4);

                    if (carro == 7 && total == 7){
                        i = desempilha(&estacionamento, &carro);
                        total--;
                    }
                    if (carro == 7 && total == 8){
                        i = desempilha(&estacionamento, &carro);
                        if (i != 0){
                            total--;
                            r = carro;
                            empilha(&rua, r);
                        }
                        i = desempilha(&estacionamento, &carro);
                        total--;
                        if (!estaVazia(rua)){
                            c=7;
                            r = carro;
                            i = desempilha(&rua, &r);
                            if (i != 0){
                                empilha(&estacionamento, c);
                                total++;
                            }
                        }
                    }
                    if (carro == 7 && total == 9)
                        retiraCarro(7, 2);
                    if (carro == 7 && total == 10)
                        retiraCarro(7, 3);

                    if (carro == 8 && total == 8){
                        i = desempilha(&estacionamento, &carro);
                        total--;
                    }
                    if (carro == 8 && total == 9){
                        i = desempilha(&estacionamento, &carro);
                        if (i != 0){
                            total--;
                            r = carro;
                            empilha(&rua, r);
                        }
                        i = desempilha(&estacionamento, &carro);
                        total--;
                        if (!estaVazia(rua)){
                            c=8;
                            r = carro;
                            i = desempilha(&rua, &r);
                            if (i != 0){
                                empilha(&estacionamento, c);
                                total++;
                            }
                        }
                    }
                    if (carro == 8 && total == 10)
                        retiraCarro(8, 2);

                    if (carro == 9 && total == 9){
                        i = desempilha(&estacionamento, &carro);
                        total--;
                    }
                    if (carro == 9 && total == 10){
                        i = desempilha(&estacionamento, &carro);
                        if (i != 0){
                            total--;
                            r = carro;
                            empilha(&rua, r);
                        }
                        i = desempilha(&estacionamento, &carro);
                        total--;
                        if (!estaVazia(rua)){
                            c=9;
                            r = carro;
                            i = desempilha(&rua, &r);
                            if (i != 0){
                                empilha(&estacionamento, c);
                                total++;
                                c++;
                            }
                        }
                    }

                    if (carro == 10 && total == 10){
                        i = desempilha(&estacionamento, &carro);
                        total--;
                    }
                }

                    break;

            case 3: mostra(estacionamento);
                    break;

            case 4: printf("\nObrigado pela preferência, volte sempre!\n\n");
                    break;

            default: printf("\nOpção inválida!\n");
        }
    }while(opcao != 4);
}

void cria(pilha *s)
{
    s->topo = NULL;
}

int  empilha(pilha *s, int d)
{
    struct no *aux;

    aux = (struct no*) malloc(sizeof(struct no));
    if (aux == NULL)
        return 0;

    aux->dado = d;
    aux->prox = s->topo;
    s->topo = aux;
    return 1;
}

void mostra(pilha s)
{
    struct no *aux;

    aux = s.topo;
    if (aux == NULL)
        printf("\nEstacionamento vazio! Nenhum carro foi encontrado.\n\n");
    else
    {
        printf("\nCarros que estão guardados:\n");
        while (aux != NULL)
        {
            printf("Carro %d\n", aux->dado);
            aux = aux->prox;
        }
        printf("\n");
    }
}

int  desempilha(pilha *s, int *d)
{
    struct no *aux;

    if (s->topo == NULL)
    {
        printf("\nEstacionamento vazio! Nenhum carro foi encontrado.\n\n");
        return 0;
    }

    aux = s->topo;
    *d = aux->dado;
    s->topo = s->topo->prox;
    aux->dado = 0;
    aux->prox = NULL;
    free(aux);
    return 1;
}

int  estaVazia(pilha s)
{
    if (s.topo == NULL)
        return 1;
    return 0;
}

int  topo(pilha s)
{
    return s.topo->dado;
}

void retiraCarro(int car, int quantidade)
{
    int n, q;
    n = car;
    q = quantidade;

    for(f=0; f<q; f++){
        i = desempilha(&estacionamento, &carro);
        if (i != 0){
            total--;
            r = carro;
            empilha(&rua, r);
        }
    }
    i = desempilha(&estacionamento, &carro);
    total--;
    if (!estaVazia(rua)){
        for(f=0; f<q; f++){
            r = carro;
            i = desempilha(&rua, &r);
            if (i != 0){
                empilha(&estacionamento, n);
                total++;
                n++;
            }
        }
    }
}
