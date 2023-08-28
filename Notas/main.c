#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num1, num2, num3, media;

    printf("Digite a primeira nota: ");
    scanf("%f",&num1);

    printf("Digite a segunda nota: ");
    scanf("%f",&num2);

    printf("Digite a terceira nota: ");
    scanf("%f",&num3);

    media = (num1 + num2 + num3) / 2;

    printf("Sua media: %.1f\n ",media);


    if(media >=6){
    printf("Aprovado");
    }

    else{
        printf("Reprovado");
    }



    return 0;
}
