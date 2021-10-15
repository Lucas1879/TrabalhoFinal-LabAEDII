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
    int i, carro, opcao, total=0, r, c;

    setlocale(LC_ALL, "Portuguese");

    cria(&estacionamento);
    cria(&rua);

    do{
        printf("\nEstacionamento Português\n");
        printf("[1] Guardar o carro no estacionamento\n");
        printf("[2] Retirar o carro do estacionamento\n");
        printf("[3] Ver os carros que estão no estacionamento\n");
        printf("[4] Ir embora\n");
        printf("Digite o numero da função que deseja para ser atendido: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: if (total == 20){
                        printf("Estacionamento cheio! Tente novamente mais tarde.");
                        return 0;
                    }
                    total++;
                    empilha(&estacionamento, total);
                    mostra(estacionamento);
                    break;

            case 2: mostra(estacionamento);
                    printf("Digite o número do seu carro: ");
                    scanf("%d", &carro);
                    if (!estaVazia(estacionamento)){
                        if (carro == 1 && total == 1){
                            i = desempilha(&estacionamento, &carro);
                            total--;
                        }
                    }
                    break;

            case 3: mostra(estacionamento);
                    break;

            case 4: printf("Obrigado pela preferência! Volte sempre.\n");
                    break;

            default: printf("Função inválida, tente outra.\n");
        }
    }while(opcao != 4);


    printf("Apresentando os carros no estacionamento:\n");
    mostra(estacionamento);
    printf("\nApresentando os carros na rua:");
    mostra(rua);

    printf("O carro 2 precisa ser retirado do estacionamento.\n\n");
    if (!estaVazia(estacionamento))
    {
        i = desempilha(&estacionamento, &c);
        if (i != 0){
            printf("Carro retirado do estacionamento = %d\n", c);
            r = c;
            empilha(&rua, r);
        }
    }
    if (!estaVazia(estacionamento))
    {
        i = desempilha(&estacionamento, &c);
        if (i != 0){
            printf("Carro retirado do estacionamento = %d\n", c);
            r = c;
            empilha(&rua, r);
        }
    }
    if (!estaVazia(estacionamento))
    {
        i = desempilha(&estacionamento, &c);
        if (i != 0){
            printf("Carro retirado do estacionamento = %d\n", c);
            r = c;
            empilha(&rua, r);
        }
    }
    if (!estaVazia(estacionamento))
    {
        i = desempilha(&estacionamento, &c);
        if (i != 0){
            printf("Carro retirado do estacionamento = %d\n", c);
            r = c;
            empilha(&rua, r);
        }
    }
    if (!estaVazia(estacionamento))
    {
        i = desempilha(&estacionamento, &c);
        if (i != 0){
            printf("Carro retirado do estacionamento = %d\n", c);
            r = c;
            empilha(&rua, r);
        }
    }
    if (!estaVazia(estacionamento))
    {
        i = desempilha(&estacionamento, &c);
        if (i != 0){
            printf("Carro retirado do estacionamento = %d\n", c);
            r = c;
            empilha(&rua, r);
        }
    }
    if (!estaVazia(estacionamento))
    {
        i = desempilha(&estacionamento, &c);
        if (i != 0){
            printf("Carro retirado do estacionamento = %d\n", c);
            r = c;
            empilha(&rua, r);
        }
    }
    if (!estaVazia(estacionamento))
    {
        i = desempilha(&estacionamento, &c);
        if (i != 0)
            printf("Carro retirado do estacionamento = %d\n", c);
    }

    printf("\nApresentando os carros no estacionamento:\n");
    mostra(estacionamento);
    printf("\nApresentando os carros na rua:\n");
    mostra(rua);

    printf("\nColocando os carros de volta no estacionamento:\n");
    if (!estaVazia(rua))
    {
        i = desempilha(&rua, &r);
        if (i != 0){
            printf("Carro retirado da rua = %d\n", r);
            c = r;
            empilha(&estacionamento, c);
        }
    }
    if (!estaVazia(rua))
    {
        i = desempilha(&rua, &r);
        if (i != 0){
            printf("Carro retirado da rua = %d\n", r);
            c = r;
            empilha(&estacionamento, c);
        }
    }
    if (!estaVazia(rua))
    {
        i = desempilha(&rua, &r);
        if (i != 0){
            printf("Carro retirado da rua = %d\n", r);
            c = r;
            empilha(&estacionamento, c);
        }
    }
    if (!estaVazia(rua))
    {
        i = desempilha(&rua, &r);
        if (i != 0){
            printf("Carro retirado da rua = %d\n", r);
            c = r;
            empilha(&estacionamento, c);
        }
    }
    if (!estaVazia(rua))
    {
        i = desempilha(&rua, &r);
        if (i != 0){
            printf("Carro retirado da rua = %d\n", r);
            c = r;
            empilha(&estacionamento, c);
        }
    }
    if (!estaVazia(rua))
    {
        i = desempilha(&rua, &r);
        if (i != 0){
            printf("Carro retirado da rua = %d\n", r);
            c = r;
            empilha(&estacionamento, c);
        }
    }
    if (!estaVazia(rua))
    {
        i = desempilha(&rua, &r);
        if (i != 0){
            printf("Carro retirado da rua = %d\n", r);
            c = r;
            empilha(&estacionamento, c);
        }
    }

    printf("\nApresentando os carros no estacionamento:\n");
    mostra(estacionamento);
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
        printf("\nNenhum carro encontrado\n\n");
    else
    {
        while (aux != NULL)
        {
            printf("Carro %d\n", aux->dado);
            aux = aux->prox;
        }
    }
}

int  desempilha(pilha *s, int *d)
{
    struct no *aux;

    if (s->topo == NULL)
    {
        printf("\nEstacionamento vazio! Seu carro não foi encontrado.\n\n");
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
