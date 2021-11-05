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

void cria(pilha *s);
int  empilha(pilha *s, int d);
int  desempilha(pilha *s, int *d);
int  estaVazia(pilha s);
void mostra(pilha s);
int  topo(pilha s);

int main()
{
    pilha estacionamento, rua;
    int i, carro, opcao, total=0, f, r, c;

    setlocale(LC_ALL, "Portuguese");

    cria(&estacionamento);
    cria(&rua);

    do{
        printf("\nEstacionamento Portugu�s\n");
        printf("[1] Guardar o carro no estacionamento\n");
        printf("[2] Retirar o carro do estacionamento\n");
        printf("[3] Ver os carros que est�o no estacionamento\n");
        printf("[4] Ir embora\n");
        printf("Digite o n�mero da fun��o que deseja para ser atendido: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: if (total == 20){
                        printf("\nEstacionamento cheio! Tente novamente mais tarde.\n");
                        return 0;
                    }
                    total++;
                    empilha(&estacionamento, total);
                    mostra(estacionamento);
                    break;

            case 2: mostra(estacionamento);
                    printf("Digite o n�mero do seu carro: ");
                    scanf("%d", &carro);
                    if (!estaVazia(estacionamento)){
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

                        if (carro == 1 && total == 3){
                            for(f=0; f<2; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                            }
                        }

                        if (carro == 1 && total == 4){
                            for(f=0; f<3; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                            }
                        }

                        if (carro == 1 && total == 5){
                            for(f=0; f<4; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 4;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                            }
                        }
                    }

                    if (carro == 1 && total == 6){
                            for(f=0; f<5; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 7){
                            for(f=0; f<6; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 8){
                            for(f=0; f<7; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 9){
                            for(f=0; f<8; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 10){
                            for(f=0; f<9; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 9;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 11){
                            for(f=0; f<10; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 9;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 10;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 12){
                            for(f=0; f<11; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 9;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 10;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 11;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 13){
                            for(f=0; f<12; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 9;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 10;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 11;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 12;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 14){
                            for(f=0; f<13; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 9;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 10;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 11;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 12;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 13;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 15){
                            for(f=0; f<14; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 9;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 10;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 11;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 12;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 13;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 14;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 16){
                            for(f=0; f<15; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 9;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 10;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 11;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 12;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 13;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 14;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 15;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 17){
                            for(f=0; f<16; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 9;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 10;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 11;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 12;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 13;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 14;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 15;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 16;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 18){
                            for(f=0; f<17; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 9;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 10;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 11;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 12;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 13;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 14;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 15;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 16;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 17;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 19){
                            for(f=0; f<18; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 9;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 10;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 11;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 12;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 13;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 14;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 15;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 16;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 17;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 18;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    if (carro == 1 && total == 20){
                            for(f=0; f<19; f++){
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
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 1;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 2;
                                    empilha(&estacionamento, c);
                                    total++;
                                }
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    c = 3;
                                    empilha(&estacionamento, c);
                                    total++;
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 4;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 5;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 6;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 7;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 8;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 9;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 10;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 11;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 12;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 13;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 14;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 15;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 16;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 17;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 18;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        c = 19;
                                        empilha(&estacionamento, c);
                                        total++;
                                    }
                                }
                            }
                    }

                    break;

            case 3: mostra(estacionamento);
                    break;

            case 4: printf("\nObrigado pela prefer�ncia, volte sempre!\n\n");
                    break;

            default: printf("Fun��o inv�lida, tente outra.\n");
        }
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
        printf("\nCarros que est�o guardados:\n");
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
    aux->dado = 0;    // Garbagge Collection
    aux->prox = NULL; // Garbagge Collection
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
