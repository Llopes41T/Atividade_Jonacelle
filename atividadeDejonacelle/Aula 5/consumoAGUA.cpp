#include <stdio.h>

int main() {
int morador1;
int morador2;
int morador3;
int morador4;
int morador5;
int media;
printf("digite o consumo do primeiro morador :");
scanf("%d", &morador1);
printf("digite o consumo do segundo morador :");
scanf("%d", &morador2);
printf("digite o consumo do terceiro morador :");
scanf("%d", &morador3);
printf("digite o consumo do quarto morador :");
scanf("%d", &morador4);
printf("digite o consumo do quinto morador :");
scanf("%d", &morador5);
media= morador1+morador2+morador3+morador4+morador5;
printf("o consumo foi: %d \n", media);
if (media <=20){
    printf("o consumo esta dentro da media");
}
else{
    printf("o consumo esta fora da media!!!");
}
}
