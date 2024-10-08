#include <stdio.h>
#include <math.h>

int main() {

    float capital;
    float juros;
    float aplicacoes; 
    float calculo; 

    printf("Informe qual seu capital: ");
    scanf("%f", &capital);

    printf("Informe a taxa mensal fixa de juros: ");
    scanf("%f", &juros);

    printf("Informe quantos meses de aplicacao vc possui: ");
    scanf("%f", &aplicacoes);

    calculo = capital*pow((1+juros/100),aplicacoes);//potenciacao aplicacoes
    printf("%f",calculo);
 
}