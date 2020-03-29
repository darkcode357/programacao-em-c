#include <stdio.h>

int main()
{
    int base;
    int altura;
    int area;

    printf("Digite o valor da base:");
    scanf("%d", &base);

    printf("Digite o valor da altura:");
    scanf("%d", &altura);

    area = base * altura;
    printf("o valor da area do retangulo e :[%d]", area);
}