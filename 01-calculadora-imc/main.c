#include <stdio.h>

int main (void)
{
    printf("-------------------------\n");
    printf("     CALCULADORA IMC\n");
    printf("-------------------------\n");
    
    float peso;
    printf("Peso (kg). Use PONTO para números decimais (Ex: 76.6). : ");
    scanf("%f", &peso);
    

    float altura;
    printf("Altura (m). Use PONTO para números decimais (Ex: 1.75). : ");
    scanf("%f", &altura);
    
    float imc = peso / (altura * altura);
    
    printf("\nSeu IMC é: %.2f\n", imc);
    
    if (imc < 18.5)
    {
        printf("Status: Abaixo do peso\n");
    }
    
    else if (imc < 25.0)
    {
        printf("Status: Saudável\n");
    }
    
    else if (imc < 30.0)
    {
        printf("Status: Sobrepeso\n");
    }
    
    else
    {
        printf("Status: Obesidade\n");
    }
    
    printf("-------------------------\n");
    
    return 0;
}
