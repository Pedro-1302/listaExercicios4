#include <stdio.h>
#include <stdlib.h>

int main()
{


    return 0;
}

int ex1() ///^~^
{
    int numero[6], i, par = 0, impar;

    printf("Informe os numeros: \n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d%*c", &numero[i]);
    }

    printf("\n\n\tPARES:\n");
    for(i = 0; i < 6; i++)
    {
        if (numero[i] % 2 == 0)
        {
            if (numero[i] %2 == 0){
                par++;
            }
            numero[i];
            printf("%d\n", numero[i]);
        }
    }
    printf("\n\n\tIMPARES:\n");
    for (i = 0; i < 6; i++)
    {
        if (numero[i] % 2 == 1)
        {
            impar++;
            numero[i];
            printf("%d\n", numero[i]);
        }
    }
    printf("\nQuantidade de Pares: %d", par);
    printf("\nQuantidade de Impares: %d", impar);
}

int ex2() ///^~^
{
    int numero[6], i, multiploDois[6], multiploTres[6], multiplotTresDois[6];

    printf("Informe os numeros que deseja operar: \n");
    for (i = 0; i <= 6; i++)
    {
        scanf("%d", &numero[i]);
    }

    printf("\nMultiplos\n");
    printf("\nDe dois: \n");
    for (i = 0; i <= 6; i++)
    {
        if(numero[i]% 2 == 0)
        {
            multiploDois[i]= numero[i];
            printf("%d ", multiploDois[i]);
        }
    }

    printf("\n\nDe tres: \n");
    for (i = 0; i <= 6; i++)
    {
        if(numero[i] % 3 == 0)
        {
            multiploTres[i]= numero[i];
            printf("%d ", multiploTres[i]);
        }
    }

    printf("\n\nDe dois e tres: \n");
    for (i = 0; i <= 6; i++)
    {
        if (numero[i] % 2 == 0 && numero[i] % 3 == 0)
        {
            multiplotTresDois[i] = numero[i];
            printf("%d ", multiplotTresDois[i]);
        }
    }

    printf("\n\nNao sao multiplos de 2 ou 3: \n");
    for(i = 0; i <= 6; i++)
    {
        if (numero[i] % 2 != 0 && numero[i] % 3 != 0)
        {
            printf("%d ", numero[i]);
        }
    }
}

int ex3() ///^~^
{
    int codProd[10], codigoProduto, i, totalEstoque[10], codCliente = 1, qtd;
    int x, y, a;

    for(i = 0; i <= 9; i++)
    {
        printf("\nInforme o codigo do produto: ");
        scanf("%d", &codProd[i]);
        printf("\nInforme o total em estoque: ");
        scanf("%d", &totalEstoque[i]);
        printf("\n-------------------------------\n\n");
    }
    printf("\n");

    while (codCliente != 0){
        printf("\n");
        printf("\nInforme o codigo do cliente: ");
        scanf("%d", &codCliente);
        printf("\nInforme o codigo do produto: ");
        scanf("%d", &codigoProduto);
        printf("\nInforme a quantidade que deseja comprar: ");
        scanf("%d", &qtd);
        printf("\n----------------------------------------\n");
        if (codCliente != 0){
        for(i = 0; i <= 9; i++)
        {
            if (codigoProduto == codProd[i]){
                a = i;
                x = 1;
            }
        }
        if (x == 1){
            if (qtd <= totalEstoque[a]){
                totalEstoque[a] = totalEstoque[a] - qtd;
                printf("Pedido Atendido. Obrigado e volte sempre\n");
            }
            else {
                printf("Nao temos estoque suficiente dessa mercadoria\n");
            }
        }else {
            printf("Codigo Inexistente\n");
        }
        x = 0;
    }
}
    printf("\n\n");
    for(i = 0; i <= 9;i++)
    {
        printf("\n------------------");
        printf("\nProduto: %d", codProd[i]);
        printf("\nQuantidade em estoque: %d", totalEstoque[i]);
        printf("\n------------------\n");
    }
}

int ex4() ///^~^
{
    int i, v[14];

    for (i = 0; i < 15; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &v[i]);
    }

    printf("\nExistem elementos iguais a 30 nas posicoes: ");
    for (i = 0; i < 15; i++)
    {
        if(v[i] == 30)
        {
            printf("\n%d", i + 1);
        }
    }
}

int ex5() ///^~^
{
    int log[15], ling[10], i, a;

    printf("Cadastro de Aluno cursando Logica\n");
    for (i = 0; i < 15; i++)
    {
        printf("Informe a matricula: ");
        scanf("%d%*c", &log[i]);
    }

    printf("Cadastro de Aluno cursando Linguagem\n");
    for (i = 0; i < 10; i++)
    {
        printf("Informe a matricula: ");
        scanf("%d%*c", &ling[i]);
    }
    printf("\n");

    for(i = 0; i <= 15; i++)
    {
        for(a = 0; a < 10; a++)
        {
            if(log[i] == ling[a]) {
                printf("Matriculas Iguais: %d\n", log[i]);
            }
        }
    }
}

int ex6() ///^~^
{
    int i, totalVendas[9], soma = 0, t = 0, t2 = 0;
    char vendedor[9][100];
    float percentualComissao[9], a[9], ganho[9], j[9];
    float maior = 0, menor = 999;

    for(i = 0; i <= 9; i++)
    {
        printf("\n------------------\n");
        printf("\nNome do vendedor: ");
        scanf("%s", &vendedor[i]);
        printf("Total de Vendas: ");
        scanf("%d", &totalVendas[i]);
        printf("Percentual comissao: ");
        scanf("%f", &percentualComissao[i]);

        a[i] = percentualComissao[i] / 100;
        j[i] = (float)totalVendas[i];
        ganho[i] = a[i] * j[i];
        soma += totalVendas[i];
    }

    printf("\n\tValores a Receber\n");
    for(i = 0; i <= 9; i++)
    {
        printf("\nVendedor: %s", vendedor[i]);
        printf("\nComissao a receber R$%.2f\n", ganho[i]);
    }

    printf("\n");
    for(i = 0; i <= 9; i++)
    {
        if(ganho[i] < menor)
        {
            menor = ganho[i];
            t = i;
        }
        if(ganho[i] > maior)
        {
            maior = ganho[i];
            t2 = i;
        }
    }
    printf("\n-----------------------------");
    printf("\nMaior Valor a receber: R$%.2f, Vendedor: %s", maior, vendedor[t2]);
    printf("\nMenor Valor a receber: R$%.2f, Vendedor: %s", menor, vendedor[t]);
    printf("\n-----------------------------\n");
    printf("\n\nTotal de vendas: R$%d", soma);
    printf("\n-----------------------------\n");
}

int ex7() ///^~^
{
    float numeros[10], soma = 0, negativo;
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("Numero: ");
        scanf("%f", &numeros[i]);

        if(numeros[i] <= 0)
        {
            negativo++;
        }
        if(numeros[i] > 0)
        {
            soma += numeros[i];
        }
    }
    printf("\nExistem %.f numeros negativos", negativo);
    printf("\nA soma dos numeros pares e: %.2f", soma);
}

int ex8() ///^~^
{
    float mediaFinal[6], maior = 0, media, soma = 0, quantoFalta;
    char aluno[6][100];
    int i, a, b;
    for(i = 0; i <= 6; i++)
    {
        printf("Aluno: ");
        scanf("%s", &aluno[i]);
        printf("Media final: ");
        scanf("%f", &mediaFinal[i]);
        if (mediaFinal[i] > maior)
        {
            maior = mediaFinal[i];
            a = i;
        }
        soma += mediaFinal[i];
    }
    media = soma / i;
    printf("\nO aluno com maior media e %s com media %.2f\n", aluno[a], maior);
    printf("\n");
    for(i = 0; i <= 6; i++)
    {
        if (mediaFinal[i] < 7)
        {
            quantoFalta = 10 - mediaFinal[i];
            b = i;
            printf("\nO aluno %s tirou %.2f e precisa tirar %.2f para ser aprovado", aluno[b], mediaFinal[i], quantoFalta);
        }
    }
}

int ex9() ///^~^
{
    char nomeProduto[10][100];
    int codProduto[10], i, r;
    float precoProduto[10], novoPreco[10], a;

    for (i = 0; i <= 9; i++){
        printf("\n\nInforme o nome do produto: ");
        scanf("%s%*c", &nomeProduto[i]);
        printf("\nInforme o codigo do produto: ");
        scanf("%d%*c", &codProduto[i]);
        printf("\nInforme o preco do produto: ");
        scanf("%f%*c", &precoProduto[i]);

        r = codProduto[i] % 2;

        if (r == 0 && precoProduto[i] > 1000){
            a = precoProduto[i] * (20.0/100.0);
            novoPreco[i] = precoProduto[i] + a;
        }
        else if (r == 0){
            novoPreco[i] = precoProduto[i] + (precoProduto[i] * 0.15);
        }
        else if (precoProduto[i] > 1000){
            novoPreco[i] = precoProduto[i] + (precoProduto[i] * 0.10);
        }
    }

    printf("\n\n");
    for (i = 0; i <= 9; i++){
        printf("\n\nNome do produto: %s", nomeProduto[i]);
        printf("\nCodigo do produto: %d", codProduto[i]);
        printf("\nPreco antigo: R$%.2f", precoProduto[i]);

        if(novoPreco[i] != 0){
            printf("\nNovo preco do produto: R$%.2f", novoPreco[i]);
        }

    }
}

int ex10() ///^~^
{
int v1[10], v2[5], i;
    int soma = 0, par = 0, impar = 0;

    printf("Vetor 1\n\n");
    for (i=0;i<10;i++){
        printf("\nValor: ");
        scanf("%d", &v1[i]);
        if(v1[i]%2==0){
            par++;
        }
    }
    printf("Vetor 2\n\n");
    for (i=0;i<5;i++){
        printf("\nValor: ");
        scanf("%d", &v2[i]);
        soma = soma +v2[i];
    }

    int vr1[par];//5 elementos
    int j=0;
    for (i=0;i<10;i++){
        if (v1[i]%2==0){
            vr1[j]=v1[i]+soma;
            j++;
        }
    }

    printf("nResultante um\n");
    for (i=0;i<par;i++){
        printf("%d ",vr1[i]);
    }

    for (i=0;i<10;i++){
        if(v1[i]%2!=0){
            impar++;
        }
    }

    int vr2[impar];
    int div=0, k=0;
    for (i=0;i<10;i++){
        if(v1[i]%2!=0){
            for (j=0;j<5;j++){
                if (v1[i]%v2[j]==0){
                    div++;
                }
            }
            vr2[k]=div;
            div=0;
            k++;
        }
    }

    printf("\nResultante dois\n");
    for (i = 0; i < impar; i++){
        printf("%d ",vr2[i]);
    }

}



