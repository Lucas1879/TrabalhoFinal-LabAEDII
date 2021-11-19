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
                                c=1;
                                for(f=0; f<2; f++){
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        empilha(&estacionamento, c);
                                        total++;
                                        c++;
                                    }
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
                                c=1;
                                for(f=0; f<3; f++){
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        empilha(&estacionamento, c);
                                        total++;
                                        c++;
                                    }
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
                                c=1;
                                for(f=0; f<4; f++){
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        empilha(&estacionamento, c);
                                        total++;
                                        c++;
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
                                c=1;
                                for(f=0; f<5; f++){
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        empilha(&estacionamento, c);
                                        total++;
                                        c++;
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
                                c=1;
                                for(f=0; f<6; f++){
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        empilha(&estacionamento, c);
                                        total++;
                                        c++;
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
                                c=1;
                                for(f=0; f<7; f++){
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        empilha(&estacionamento, c);
                                        total++;
                                        c++;
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
                                c=1;
                                for(f=0; f<8; f++){
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        empilha(&estacionamento, c);
                                        total++;
                                        c++;
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
                                c=1;
                                for(f=0; f<9; f++){
                                    r = carro;
                                    i = desempilha(&rua, &r);
                                    if (i != 0){
                                        empilha(&estacionamento, c);
                                        total++;
                                        c++;
                                    }
                                }
                            }
                    }

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
                    if (carro == 2 && total == 4){
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
                            c=2;
                            for(f=0; f<2; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 2 && total == 5){
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
                            c=2;
                            for(f=0; f<3; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 2 && total == 6){
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
                            c=2;
                            for(f=0; f<4; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 2 && total == 7){
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
                            c=2;
                            for(f=0; f<5; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 2 && total == 8){
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
                            c=2;
                            for(f=0; f<6; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 2 && total == 9){
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
                            c=2;
                            for(f=0; f<7; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 2 && total == 10){
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
                            c=2;
                            for(f=0; f<8; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }

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
                    if (carro == 3 && total == 5){
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
                            c=3;
                            for(f=0; f<2; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 3 && total == 6){
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
                            c=3;
                            for(f=0; f<3; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 3 && total == 7){
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
                            c=3;
                            for(f=0; f<4; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 3 && total == 8){
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
                            c=3;
                            for(f=0; f<5; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 3 && total == 9){
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
                            c=3;
                            for(f=0; f<6; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 3 && total == 10){
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
                            c=3;
                            for(f=0; f<7; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }

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
                    if (carro == 4 && total == 6){
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
                            c=4;
                            for(f=0; f<2; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 4 && total == 7){
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
                            c=4;
                            for(f=0; f<3; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 4 && total == 8){
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
                            c=4;
                            for(f=0; f<4; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 4 && total == 9){
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
                            c=4;
                            for(f=0; f<5; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 4 && total == 10){
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
                            c=4;
                            for(f=0; f<6; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }

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
                    if (carro == 5 && total == 7){
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
                            c=5;
                            for(f=0; f<2; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 5 && total == 8){
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
                            c=5;
                            for(f=0; f<3; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 5 && total == 9){
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
                            c=5;
                            for(f=0; f<4; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }

                    if (carro == 5 && total == 10){
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
                            c=5;
                            for(f=0; f<5; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }

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
                    if (carro == 6 && total == 8){
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
                            c=6;
                            for(f=0; f<2; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 6 && total == 9){
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
                            c=6;
                            for(f=0; f<3; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }

                    if (carro == 6 && total == 10){
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
                            c=6;
                            for(f=0; f<4; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }

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
                    if (carro == 7 && total == 9){
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
                            for(f=0; f<2; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }
                    if (carro == 7 && total == 10){
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
                            c=7;
                            for(f=0; f<3; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }

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
                    if (carro == 8 && total == 10){
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
                            c=8;
                            for(f=0; f<2; f++){
                                r = carro;
                                i = desempilha(&rua, &r);
                                if (i != 0){
                                    empilha(&estacionamento, c);
                                    total++;
                                    c++;
                                }
                            }
                        }
                    }

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
